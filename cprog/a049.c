#include <stdio.h>

int G(int B)
{
    B = B * B;
    return B;
}
int main()
{
    int A = 0, m = 5;
    A = G(m);
    if (m < 10)
        A = G(m) + A;
    else
        A = G(m);
    printf("%d \n", A);
    return 0;
}
