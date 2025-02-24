//a018: if判斷式
//判斷數字是正數、負數或零
#include <stdio.h>
int main() {
  int num = 10;

  if (num > 0) {
    printf("num 是正數\n");
  } else if (num < 0) {
    printf("num 是負數\n");
  } else {
    printf("num 是零\n");
  }

  return 0;
}