#include <stdio.h>

int main()
{
    int a[9] = {1, 3, 5, 7, 9, 8, 6, 4, 2};
    int n = 9, tmp;
    for (int i = 0; i < n; i = i + 1)
    {
        tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
    for (int i = 0; i <= n / 2; i = i + 1)
        printf("%d %d ", a[i], a[n - i - 1]);

    return 0;
}
