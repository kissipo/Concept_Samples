//a012: 迭代敘述 (Iteration Statements)
//說明 迭代敘述的使用
#include <stdio.h>
int main() {
    int x = 10;
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    while (x > 0) {
        printf("%d ", x);
        x--;
    }
    do {
        printf("%d ", x);
        x--;
    } while (x > 0);
  return 0;
}