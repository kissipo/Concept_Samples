#include <stdio.h>

int main()
{
    int A[] = {5, 3, 9, 1, 6};
    int n = sizeof(A) / sizeof(A[0]);

    int p = A[0], q = A[0];

    for (int i = 1; i < n; i++)
    {
        if (A[i] > p)
            p = A[i];
        if (A[i] < q)
            q = A[i];
    }

    printf("最大值 (p): %d\n", p);
    printf("最小值 (q): %d\n", q);

    return 0;
}
