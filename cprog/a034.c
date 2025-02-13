#include <stdio.h>

int main()
{
    int x;
    char y;

    // 讓使用者輸入 x 的值
    printf("Enter a value for x: ");
    scanf("%d", &x);

    // 使用 switch-case
    switch (x)
    {
    case 10:
        y = 'a';
        break;
    case 20:
    case 30:
        y = 'b';
        break;
    default:
        y = 'c';
    }
    printf("Using switch-case, y = %c\n", y);

    // 使用 if-else
    if (x == 10)
        y = 'a';
    else if (x == 20 || x == 30)
        y = 'b';
    else
        y = 'c';

    printf("Using if-else, y = %c\n", y);

    return 0;
}
