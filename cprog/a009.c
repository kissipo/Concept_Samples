//a009: 複合敘述 (Compound Statements)
//說明複合敘述的使用
#include <stdio.h>
int main() {
    int x = 10;
    int y = 5;
    int sum;
  
    // 複合敘述 (Compound Statement) -  用大括號 {} 包圍
    {
      sum = x + y;
      printf("The sum of x and y is: %d\n", sum);
      int difference = x - y; // 在複合敘述內宣告變數 difference
      printf("The difference of x and y is: %d\n", difference);
  
      // 甚至可以在複合敘述內再嵌套複合敘述
      {
          int product = x * y;
          printf("The product of x and y is: %d\n", product);
      }
  
    } // 複合敘述結束
  return 0;
}