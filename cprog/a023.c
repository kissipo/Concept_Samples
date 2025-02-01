#include <stdio.h>

int main()
{
    int i = 76;
    int j = 48;
    int k;

    while ((i % j) != 0)
    {
        k = i % j;
        i = j;
        j = k;
    }

    printf("%d\n", j);

    return 0;
}