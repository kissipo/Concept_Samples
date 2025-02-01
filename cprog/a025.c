#include <stdio.h>

void f(int n)
{
    int count = 1;
    printf("%d\n", n);

    while (n != 1)
    {
        if ((n % 2) == 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
        printf("%d\n", n);
        count++;
    }

    printf("總共數字: %d\n", count);
}

int main()
{
    f(22);
    return 0;
}