#include <stdio.h>
int f()
{
    int p = 2;
    while (p < 2000)
    {
        p = 2 * p;
    }
    return p;
}
int main()
{
    int result = f();
    printf("The result is: %d\n", result);
    return 0;
}
