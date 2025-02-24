//a021:多重條件的迴圈
// 迴圈的條件部分可以包含多個條件，
#include <stdio.h>

int main() {
    for (int j = 0; j < 10 || j > 15; j++) { // 兩個條件
        printf("%d ", j);
        if (j > 20) {
          break;
        }
      }
    printf("\n");

    // 使用逗號分隔多個表達式
    for (int i = 1, j = 10; i <= j; i++, j--) {
        printf("%d %d\n", i, j);
    }

  return 0;
}