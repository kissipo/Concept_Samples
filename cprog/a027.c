#include <stdio.h>

#define TRUE 1
#define FALSE 0
int d[6], val, allBig;

int main()
{
    printf("Test (A):\n");
    d[1] = 11;
    d[2] = 12;
    d[3] = 13;
    d[4] = 14;
    d[5] = 15;
    val = 3;

    allBig = TRUE;
    for (int i = 1; i <= 5; i = i + 1)
    {
        if (d[i] > val)
        {
            allBig = TRUE;
        }
        else
        {
            allBig = FALSE;
        }
    }
    if (allBig == TRUE)
    {
        printf("%d is the smallest.\n", val);
    }
    else
    {
        printf("%d is not the smallest.\n", val);
    }

    printf("\nTest (B):\n");
    d[1] = 11;
    d[2] = 12;
    d[3] = 13;
    d[4] = 14;
    d[5] = 25;
    val = 20;

    allBig = TRUE;
    for (int i = 1; i <= 5; i = i + 1)
    {
        if (d[i] > val)
        {
            allBig = TRUE;
        }
        else
        {
            allBig = FALSE;
        }
    }
    if (allBig == TRUE)
    {
        printf("%d is the smallest.\n", val);
        else
        {
            printf("%d is not the smallest.\n", val);
        }

        printf("\nTest (C):\n");
        d[1] = 23;
        d[2] = 15;
        d[3] = 18;
        d[4] = 20;
        d[5] = 11;
        val = 12;

        allBig = TRUE;
        for (int i = 1; i <= 5; i = i + 1)
        {
            if (d[i] > val)
            {
                allBig = TRUE;
            }
            else
            {
                allBig = FALSE;
            }
        }
        if (allBig == TRUE)
        {
            printf("%d is the smallest.\n", val);
        }
        else
        {
            printf("%d is not the smallest.\n", val);
        }

        printf("\nTest (D):\n");
        d[1] = 18;
        d[2] = 17;
        d[3] = 19;
        d[4] = 24;
        d[5] = 15;
        val = 16;

        allBig = TRUE;
        for (int i = 1; i <= 5; i = i + 1)
        {
            if (d[i] > val)
            {
                allBig = TRUE;
            }
            else
            {
                allBig = FALSE;
            }
        }
        if (allBig == TRUE)
        {
            printf("%d is the smallest.\n", val);
        }
        else
        {
            printf("%d is not the smallest.\n", val);
        }

        return 0;
    }
