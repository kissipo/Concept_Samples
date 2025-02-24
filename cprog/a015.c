//a015:  關係運算子
//關係運算子是用來比較兩個數值的大小，並回傳一個布林值。
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("a == b 的結果: %d\n", a == b); // 輸出 0 (假)
    printf("a != b 的結果: %d\n", a != b); // 輸出 1 (真)
    printf("a > b 的結果: %d\n", a > b);   // 輸出 0 (假)
    printf("a < b 的結果: %d\n", a < b);   // 輸出 1 (真)
    printf("a >= b 的結果: %d\n", a >= b);  // 輸出 0 (假)
    printf("a <= b 的結果: %d\n", a <= b);  // 輸出 1 (真)

    return 0;
}