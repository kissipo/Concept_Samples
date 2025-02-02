#include <stdio.h>

int Mystery(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        return Mystery(x - 2) + Mystery(x - 1);
    }
}

int main()
{
    int result = Mystery(9);
    printf("Mystery(9) = %d\n", result);
    return 0;
}
