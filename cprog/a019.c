//a019: switch條件式
//switch 條件式中有不用case的使用
#include <stdio.h>
int main() {
  int choice = 2;
  switch (choice) {
    case 1:
      printf("選擇了選項 1\n");
      break;
    case 2:
      printf("選擇了選項 2\n");
      break;
    case 3:
      printf("選擇了選項 3\n");
      break;
    default:
      printf("無效的選擇\n");
  }
  return 0;
}

