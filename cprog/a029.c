//a029:傳值呼叫
//函式呼叫時，將實際參數的值複製一份給形式參數，
//所以在函式內部對形式參數的操作不會影響實際參數的值。
#include <stdio.h>

void swap_value(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printf("swap_value 函式內部：a = %d, b = %d\n", a, b);
}

int main() {
  int num1 = 10, num2 = 20;

  printf("呼叫前：num1 = %d, num2 = %d\n", num1, num2);
  swap_value(num1, num2);
  printf("呼叫後：num1 = %d, num2 = %d\n", num1, num2);

  return 0;
}