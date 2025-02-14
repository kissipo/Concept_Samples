//a010: 跳躍敘述 (Jump Statements)
//說明 跳躍敘述的使用
#include <stdio.h>
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // 跳出迴圈
        }
        printf("%d ", i);
    }
  return 0;
}