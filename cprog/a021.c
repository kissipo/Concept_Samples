#include <stdio.h>

int main()
{
    int n;

    printf("請輸入陣列大小: ");
    scanf("%d", &n);

    int a[n];

    printf("請輸入陣列數值: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int hold;

    for (int i = 0; i < n - 1; i++)
    {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
    }

    printf("Modified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
