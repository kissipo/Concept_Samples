#include <stdio.h>

int count = 0;

void search(int x, int y, int z)
{
    count++;
    if (x < y)
    {
        int t = (x + y + 1) / 2;
        if (z >= t)
            search(t, y, z);
        else
            search(x, t - 1, z);
    }
}

int main()
{
    int x = 1, y = 10, z = 3;
    search(x, y, z);
    printf("總共被執行次數: %d\n", count);
    return 0;
}
