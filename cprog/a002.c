//a002: printf()函式的使用
//輸出姓名、年齡、身高
#include <stdio.h>

int main() {
  char name[] = "Alex";
  int age = 18;
  float height = 1.75;

  printf("Name：%s，Age：%d year old，Height：%.2f m\n", 
                               name, age, height);

  return 0;
}