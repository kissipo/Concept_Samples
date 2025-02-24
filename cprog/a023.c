//a023: do-while 迴圈
//在執行迴圈體之後才判斷條件
//因此迴圈體至少執行一次。
#include <stdio.h>

int main() {
  int i = 1;

  // 印出 1 到 10 的數字
  do {
    printf("%d ", i);
    i++;
  } while (i <= 10);
  printf("\n");

  return 0;
}