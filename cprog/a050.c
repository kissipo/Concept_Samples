#include <stdio.h>

int G(int a, int x)
{
    if (x == 0)
        return 1;
    else
        return ((2 * a) + 2) * G(a, x - 1);
}

int main()
{
    int a, x;

    printf("請輸入 a 的值: ");
    scanf("%d", &a);
    getchar();

    printf("請輸入 x 的值: ");
    scanf("%d", &x);

    int result = G(a, x);
    printf("結果: %d\n", result);

    return 0;
}
