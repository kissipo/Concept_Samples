//a013: 跳躍敘述 (Jump Statements)
//說明 跳躍敘述的使用
#include <stdio.h>
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // 跳出迴圈
        }
        printf("%d ", i);
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) { // 如果 i 是偶數
          continue; // 跳過當前迭代
        }
        printf("%d ", i);
    }
  return 0;
}