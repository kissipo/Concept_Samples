#include <stdio.h>

#define M 3
#define N 3

int main()
{
    int A[M][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rowsum = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            rowsum = rowsum + A[i][j];
        }

        printf("The sum of row %d is %d.\n", i, rowsum);
    }

    return 0;
}
