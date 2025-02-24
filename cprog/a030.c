//a030:傳址呼叫
//呼叫函式時，將變數的記憶體位址傳遞給函式，
//函式可以直接存取變數的值
#include <stdio.h>

void swap_address(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("swap_address 函式內部：*a = %d, *b = %d\n", *a, *b);
}

int main() {
  int num1 = 10, num2 = 20;

  printf("呼叫前：num1 = %d, num2 = %d\n", num1, num2);
  swap_address(&num1, &num2);
  printf("呼叫後：num1 = %d, num2 = %d\n", num1, num2);

  return 0;
}