#include <stdio.h>

int main()
{
    int s;

    printf("請輸入分數: ");
    scanf("%d", &s);

    if (s >= 90)
    {
        printf("A\n");
    }
    else if (s >= 80)
    {
        printf("B\n");
    }
    else if (s >= 70)
    {
        printf("C\n");
    }
    else if (s >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}
