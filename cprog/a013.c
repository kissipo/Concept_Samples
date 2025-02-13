#include <stdio.h>

int f1(int a[], int size, int value, int *count)
{
    int r_value = -1;
    int i = 0;
    *count = 0;
    while (i < size)
    {
        (*count)++;
        if (a[i] == value)
        {
            r_value = i;
            break;
        }
        i = i + 1;
    }
    return r_value;
}

int f2(int a[], int size, int value, int *count)
{
    int r_value = -1;
    int low = 0, high = size - 1;
    int mid;
    *count = 0;
    while (low <= high)
    {
        (*count)++;
        mid = (low + high) / 2;
        if (a[mid] == value)
        {
            r_value = mid;
            break;
        }
        else if (a[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return r_value;
}

int main()
{
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = 3 * i + 1;
    }

    int value = 100;
    int size = 100;

    int count_f1 = 0, count_f2 = 0;

    f1(a, size, value, &count_f1);
    f2(a, size, value, &count_f2);
    printf("n1 = %d\n", count_f1);
    printf("n2 = %d\n", count_f2);

    return 0;
}
