#include <stdio.h>

int main()
{
    for (int i = 0; i <= 3; i = i + 1)
    {
        for (int j = 0; j < i; j = j + 1)
            printf(" ");
        for (int k = 6 - 2 * i; k > 1; k = k - 1)
            printf("*");
        printf("\n");
    }
    return 0;
}
