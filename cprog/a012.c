#include <stdio.h>

int f(int a[], int n)
{
    int index = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] >= a[index])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int n;

    printf("請輸入數組: ");
    scanf("%d", &n);

    int a[n];

    printf("請輸入數組的元素: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int index = f(a, n);

    printf("最大值的索引是: %d\n", index);

    return 0;
}
