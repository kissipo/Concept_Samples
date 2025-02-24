//a022:while 迴圈
// while 迴圈當條件成立時
// 執行迴圈內的程式碼，直到條件不成立為止。
#include <stdio.h>

int main() {
  int i = 1;

  // 印出 1 到 10 的數字
  while (i <= 10) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  return 0;
}