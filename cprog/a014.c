//a014: 序列結構
//由上而下按照順序執行
#include <stdio.h>

int main() {
  int x = 10;  // 宣告一個整數變數 x，並賦值為 10
  int y = 5;   // 宣告一個整數變數 y，並賦值為 5
  int sum;     // 宣告一個整數變數 sum

  sum = x + y; // 將 x 和 y 相加，結果賦值給 sum

  printf("x + y = %d\n", sum); // 輸出 sum 的值

  return 0;
}