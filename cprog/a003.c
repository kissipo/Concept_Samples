#include <stdio.h>

int main()
{
    int i, j = 0;

    for (i = 0; i < 128; i = i + j)
    {
        j = i + 1;
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}
