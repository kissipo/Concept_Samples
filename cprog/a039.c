#include <stdio.h>

int main()
{
    int a = 0, n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = i; j <= n; j = j + 1)
        {
            for (int k = 1; k <= n; k = k + 1)
            {
                a = a + 1;
            }
        }
    }

    printf("a = %d\n", a);

    return 0;
}
