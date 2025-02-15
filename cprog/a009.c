//a009: 基本算術運算 
#include <stdio.h>
int main() {
  int a = 10;
  int b = 5;
  // 加法
  int sum = a + b;
  printf("a + b = %d\n", sum); // 輸出：a + b = 15
  // 減法
  int difference = a - b;
  printf("a - b = %d\n", difference); // 輸出：a - b = 5
  // 乘法
  int product = a * b;
  printf("a * b = %d\n", product); // 輸出：a * b = 50
  // 除法
  int quotient = a / b;
  printf("a / b = %d\n", quotient); // 輸出：a / b = 2
  // 取餘數
  int remainder = a % b;
  printf("a %% b = %d\n", remainder); // 輸出：a % b = 0
  return 0;
}