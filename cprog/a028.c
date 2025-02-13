#include <stdio.h>
int main()
{
    int fun(int n)
    {
        int fac = 1;
        if (n > 0)
        {
            fac = n * fun(n - 1);
        }
        return fac;
    }

    return 0;
}
