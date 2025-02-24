//a034:計算最大公因數
#include <stdio.h>
// 計算最大公因數的函式
int gcd1(int a, int b) {
    if (b == 0) {
        return a; // 基本情況：餘數為 0，a 即為最大公因數
    } else {
        return gcd1(b, a % b); // 遞迴呼叫
    }
}
int gcd2(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // 輸入兩個整數
    printf("請輸入兩個整數：");
    scanf("%d %d", &num1, &num2);

    // 計算並印出最大公因數
    printf("%d 和 %d 的gcd是：%d\n", num1, num2, gcd1(num1, num2));
    printf("%d 和 %d 的gcd是：%d\n", num1, num2, gcd2(num1, num2));
    return 0;
}