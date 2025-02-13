#include <stdio.h>
int f(int i);

int main()
{

    printf("f(10) = %d\n", f(10));
    return 0;
}

int f(int i)
{
    if (i > 0)
    {
        if (((i / 2) % 2) == 0)
            return f(i - 2) * i;
        else
            return f(i - 2) * (-i);
    }
    else
    {
        return 1;
    }
}