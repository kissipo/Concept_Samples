//a024: 字串變數
//字串的宣告與初始化及運算
#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello"; // 宣告並初始化字串
  char str2[20];

  strcpy(str2, str1); // 複製字串
  strcat(str2, ", world!"); // 連接字串

  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);

  printf("str1 的長度: %d\n", strlen(str1));

  return 0;
}