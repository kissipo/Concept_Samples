#include <stdio.h>

int main()
{
    int X1, X2;

    X1 = 0;
    X2 = 0;
    if (!(X1 || X2))
    {
        printf("!(X1 || X2) is True when X1 is %d and X2 is %d\n", X1, X2);
    }

    X1 = 1;
    X2 = 1;
    if (!(X1 || X2))
    {
        printf("!(X1 || X2) is True when X1 is %d and X2 is %d\n", X1, X2);
    }

    X1 = 1;
    X2 = 0;
    if (!(X1 || X2))
    {
        printf("!(X1 || X2) is True when X1 is %d and X2 is %d\n", X1, X2);
    }

    X1 = 0;
    X2 = 1;
    if (!(X1 || X2))
    {
        printf("!(X1 || X2) is True when X1 is %d and X2 is %d\n", X1, X2);
    }

    return 0;
}
