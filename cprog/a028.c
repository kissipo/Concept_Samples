//a028: 函式的宣告與定義
#include <stdio.h>
// 函式宣告
int add(int a, int b);

int main() {
  int num1 = 10, num2 = 20;
  int result = add(num1, num2); // 呼叫函式

  printf("總和：%d\n", result);

  return 0;
}
// 函式定義
int add(int a, int b) {
  int sum = a + b;
  return sum;
}