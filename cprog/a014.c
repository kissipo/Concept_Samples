#include <stdio.h>

int main()
{
  int b[101], a[101];
  int i;

  for (i = 1; i <= 100; i = i + 1)
  {
    b[i] = i;
  }

  a[0] = 0;

  for (i = 1; i <= 100; i = i + 1)
  {
    a[i] = b[i] + a[i - 1];
  }

  printf("%d\n", a[50] - a[30]);

  return 0;
}