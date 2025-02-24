//a016: 邏輯運算子
// 邏輯運算子用於組合多個條件，
// 根據這些條件的結果返回一個布爾值（true 或 false）。
#include <stdio.h>
int main() {
    int a = 15;
    int b = 25;
    // 邏輯 AND
    if ((a > 10) && (a < 20)) {
        printf("a 在 10 到 20 之間\n");
    } else {
        printf("a 不在 10 到 20 之間\n");
    }
    // 邏輯 OR
    if ((b < 0) || (b > 20)) {
        printf("b 小於 0 或大於 20\n");
    } else {
        printf("b 不小於 0 且不大於 20\n");
    }
    // 邏輯 NOT
    if (!(a == 0)) {
        printf("a 不等於 0\n");
    } else {
        printf("a 等於 0\n");
    }
    return 0;
}