#include <stdio.h>

int main()
{
    int i, n, A[100];
    scanf ("%d", &n);
    for (i=0; i!=n; i=i+1) { 
      A[i] = i;
      i = i + 1;
    }

    printf("%d\n",n);

    return 0;
}