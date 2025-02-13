#include <stdio.h>

int main()
{
    int Q[200];
    int i, val = 0;
    int count = 0;
    int head = 0, tail = 0;
    for (i = 1; i <= 30; i = i + 1)
    {
        Q[tail] = i;
        tail = tail + 1;
    }
    while (tail > head + 1)
    {
        val = Q[head];
        head = head + 1;
        count = count + 1;
        if (count == 3)
        {
            count = 0;
            Q[tail] = val;
            tail = tail + 1;
        }
    }
    printf("%d", Q[head]);
}