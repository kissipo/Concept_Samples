#include <stdio.h>

void G(int a)
{
    printf("%d ", a);
    if (a >= 3)
        return;
    else
        G(a + 1);
    printf("%d ", a);
}

int main()
{
    G(1);
    return 0;
}
