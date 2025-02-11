#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TEST_COUNT 10000

void test_option(const char *label, int min_value, int max_value, int (*func)())
{
    int min = 10000, max = 0;

    for (int i = 0; i < TEST_COUNT; i++)
    {
        int num = func();
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    printf("%s -> 最小值: %d, 最大值: %d\n", label, min, max);
}

int option_A() { return rand() % 900 + 100; }
int option_B() { return rand() % 1000 + 1; }
int option_C() { return rand() % 899 + 101; }
int option_D() { return rand() % 901 + 100; }

int main()
{
    srand(time(0));

    printf("測試各選項的最小值與最大值...\n");

    test_option("A", 100, 1000, option_A);
    test_option("B", 100, 1000, option_B);
    test_option("C", 100, 1000, option_C);
    test_option("D", 100, 1000, option_D);

    return 0;
}
