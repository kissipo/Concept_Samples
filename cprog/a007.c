#include <stdio.h>

int main()
{
    int a[5] = {9, 4, 3, 5, 3};
    int b[10] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int c = 0;
    for (int i = 0; i < 5; i = i + 1)
        c = c + b[a[i]];
    printf("%d", c);
    return 0;
}