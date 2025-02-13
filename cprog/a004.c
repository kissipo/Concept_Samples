//a004: getchar() 函數的使用
//輸入一個字元，然後輸出該字元及其 ASCII 碼值。
#include <stdio.h>
int main() {
  int c;

  printf("請輸入一個字元：");
  c = getchar();

  printf("您輸入的字元是：%c，ASCII 碼值為：%d\n", c, c);
  return 0;
}