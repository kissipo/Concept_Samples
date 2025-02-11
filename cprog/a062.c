#include <stdio.h>

void F()
{
    int X[10] = {0};
    int input[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++)
    {
        X[(i + 2) % 10] = input[i];
    }

    printf("X[] 陣列的內容: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");
}

int main()
{
    F();
    return 0;
}
