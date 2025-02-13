#include <stdio.h>

void printHi(int step, int start, int end)
{
    int count = 0;
    for (int i = start; i < end; i = i + step)
    {
        printf("%s\n", "Hi!");
        count++;
    }
    printf("列印次數: %d\n", count);
}

int main()
{
    printf("選項 A: \n");
    printHi(1, 0, 20);

    printf("選項 B: \n");
    printHi(5, 5, 101);

    printf("選項 C: \n");
    printHi(5, 0, 100);

    printf("選項 D: \n");
    printHi(5, 5, 100);

    return 0;
}
