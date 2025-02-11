#include <stdio.h>
#include <math.h>

int F(int n)
{
    int x = 0;

    for (int i = 1; i <= n; i = i + 1)
        for (int j = i; j <= n; j = j + 1)
            for (int k = 1; k <= n; k = k * 2)
                x = x + 1;
    return x;
}

int main()
{
    int n = 10;
    int result = (n * (n + 1) * (int)(log2(n) + 1)) / 2;
    printf("The value of the formula n(n+1)(log2(n)+1)/2 for n = %d is: %d\n", n, result);

    return 0;
}
