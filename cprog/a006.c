#include <stdio.h>

int f(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return n + f((n / 2) + 1);
    }
}

int main()
{
    int result = f(10); // 示例输入，可以根据需要修改
    printf("Result: %d\n", result);
    return 0;
}
