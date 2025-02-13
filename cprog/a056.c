#include <stdio.h>

int F(int n)
{
    if (n < 4)
        return n;
    else
        return n + F(n - 3);
}

int main()
{
    int result = F(14);
    printf("F(14) = %d\n", result);
    return 0;
}
