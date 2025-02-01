#include <stdio.h>

void f1(int m);
void f2(int n);
int main()
{
    f1(1);
    return 0;
}

void f1(int m)
{
    if (m > 3)
    {
        printf("f1 執行：%d\n", m);
        return;
    }
    else
    {
        printf("f1 執行：%d\n", m);
        f2(m + 2);
        printf("返回 f1 執行：%d\n", m);
    }
}

void f2(int n)
{
    if (n > 3)
    {
        printf("f2 執行：%d\n", n);
        return;
    }
    else
    {
        printf("f2 執行：%d\n", n);
        f1(n - 1);
        printf("返回 f2 執行：%d\n", n);
    }
}
