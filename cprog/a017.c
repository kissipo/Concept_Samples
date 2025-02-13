#include <stdio.h>

int a(int n, int m)
{
    if (n < 10)
    {
        if (m < 10)
        {
            return n + m;
        }
        else
        {
            return a(n, m - 2) + m;
        }
    }
    else
    {
        return a(n - 1, m) + n;
    }
}

int main()
{
    int n, m;

    printf("請輸入 n and m: ");
    scanf("%d %d", &n, &m);

    int result = a(n, m);
    printf("回傳值: %d\n", result);

    return 0;
}