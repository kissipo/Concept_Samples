#include <stdio.h>

int main()
{
    int a = 2, b = 3;
    int c = 4, d = 5;
    int val;
    val = b / a + c / b + d / b;
    printf("%d\n", val);

    return 0;
}
