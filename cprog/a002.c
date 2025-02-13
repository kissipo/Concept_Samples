//a002: printf()函式的使用
//輸出姓名、年齡、身高
#include <stdio.h>

int main() {
  char name[] = "小明";
  int age = 18;
  float height = 1.75;

  printf("姓名：%s，年齡：%d 歲，身高：%.2f 公尺\n", 
                               name, age, height);

  return 0;
}