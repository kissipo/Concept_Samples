#include <stdio.h>

int main()
{
    int A[5], B[5], i, c;
    for (i = 1; i <= 4; i = i + 1)
    {
        A[i] = 2 + i * 4;
        B[i] = i * 5;
    }
    c = 0;
    for (i = 1; i <= 4; i = i + 1)
    {
        if (B[i] > A[i])
        {
            c = c + (B[i] % A[i]);
        }
        else
        {
            c = 1;
        }
    }
    printf("%d\n", c);
    return 0;
}