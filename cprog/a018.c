#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int i, temp, N;

    scanf("%d", &N);

    for (i = 2; i <= N; i = i + 1)
    {
        temp = b;
        b = a + b;
        a = temp;
        printf("%d\n", b);
    }

    return 0;
}