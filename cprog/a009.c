#include <stdio.h>

int f(float n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return n + f((n / 2) + 1);
    }
}

int main()
{
    float x = 10, y = 3;

    if ((0.5 * x / y - f(0.5 * x / y)) == 0.5)
    {
        printf("%f\n", f(0.5 * x / y) - 1);
    }
    else if ((0.5 * x / y - f(0.5 * x / y)) < 0.5)
    {
        printf("%f\n", f(0.5 * x / y));
    }
    else
    {
        printf("%f\n", f(0.5 * x / y) + 1);
    }

    return 0;
}
