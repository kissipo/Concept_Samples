// a003: scanf() 函數的使用
// 輸入一個整數，然後輸出這個整數。
#include <stdio.h>

int main() {
  int age;

  printf("請輸入您的年齡：");
  scanf("%d", &age);

  printf("您的年齡是：%d\n", age);

  return 0;
}