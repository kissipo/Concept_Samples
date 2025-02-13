#include <stdio.h>

int F(int a)
{
    if (a * a < 50)
        return a * 2 + 3;
    else
        return a * 3 + 1;
}

int main()
{
    int result_7 = F(7);
    int result_8 = F(8);

    printf("F(7) = %d\n", result_7);
    printf("F(8) = %d\n", result_8);

    return 0;
}
