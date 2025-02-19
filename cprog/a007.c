//a007: 變數的宣告與使用
#include <stdio.h>

int main() {
  // 宣告不同類型的變數
  int age = 25;           // 整數變數
  float height = 1.75;     // 浮點數變數
  char initial = 'J';     // 字元變數
  char name[] = "John";  // 字串變數

  // 輸出變數的值
  printf("Age: %d\n", age);
  printf("Height: %.2f\n", height); // %.2f 表示輸出小數點後兩位
  printf("Initial: %c\n", initial);
  printf("Name: %s\n", name);

  return 0;
}