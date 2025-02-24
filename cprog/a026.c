//a026: 指標變數
//指標變數的值、記憶體位址、指向的值
#include <stdio.h>

int main() {
  int num = 10;
  int *ptr = &num;

  printf("value of num   : %d\n", num); // 輸出 num 的值
  printf("address of num : %p\n", &num); // 輸出 num 的記憶體位址
  printf("value of ptr   : %p\n", ptr); // 輸出 ptr 的值 (num 的記憶體位址)
  printf("value of addr  : %d\n", *ptr); // 輸出 ptr 指向的記憶體位置中儲存的值

  return 0;
}