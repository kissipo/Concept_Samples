#include <stdio.h>

void F(int a)
{
    while (a < 10)
    {
        a = a + 5;
    }
    if (a < 12)
    {
        a = a + 2;
    }
    if (a <= 11)
    {
        a = 5;
    }

    printf("Final value of a: %d\n", a);
}

int main()
{
    F(0);
    return 0;
}
