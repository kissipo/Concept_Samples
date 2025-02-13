#include <stdio.h>

int g(int a)
{
    if (a > 1)
    {
        return g(a - 2) + 3;
    }
    return a;
}

int main()
{
    int a;
    printf("請輸入一個數字: ");
    scanf("%d", &a);
    printf("結果是: %d\n", g(a));
    return 0;
}
