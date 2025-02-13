#include <stdio.h>

int F(int x, int y)
{
    if (x < 1)
        return 1;
    else
        return F(x - y, y) + F(x - 2 * y, y);
}

int main()
{
    int result = F(5, 2);
    printf("F(5, 2) = %d\n", result);
    return 0;
}
