#include <stdio.h>

int A[8] = {0, 2, 4, 6, 8, 10, 12, 14};

int Search(int x)
{
    int high = 7;
    int low = 0;

    while (high > low)
    {
        int mid = (high + low) / 2;
        if (A[mid] <= x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    if (low >= 8)
    {
        return -1;
    }

    return A[high];
}

int main()
{
    int test_cases[] = {-1, 0, 10, 16};
    int size = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < size; i++)
    {
        int x = test_cases[i];
        int result = Search(x);
        if (result == -1)
        {
            printf("Search(%d) -> Not Found\n", x);
        }
        else
        {
            printf("Search(%d) -> %d\n", x, result);
        }
    }

    return 0;
}
