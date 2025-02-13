#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i = i + 1)
    {
        for (j = 0; j > i; j = j + 2)
        {
            printf("[%d]", i + j);
        }
    }
    return 0;
}