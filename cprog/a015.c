#include <stdio.h>

int count = 0;

int f(int n)
{
    int sum = 0;
    if (n < 2)
    {
        return 0;
    }
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
        count++;
    }
    sum = sum + f(2 * n / 3);
    return sum;
}

int main()
{
    int n;

    scanf("%d", &n);
    f(n);

    printf("%d\n", count);

    return 0;
}