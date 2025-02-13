#include <stdio.h>

int GCD(int a, int b)
{
    int r;
    r = a % b;
    if (r == 0)
        return b;
    return GCD(b, r);
}

int main()
{
    int a, b;
    printf("請輸入兩個數字: ");
    scanf("%d %d", &a, &b);

    int result = GCD(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);

    return 0;
}
