//a032:費氏數列
#include <stdio.h>
int fib1(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib1(n - 1) + fib1(n - 2);
    }
}
int fib2(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}
int main() {
    int n = 10;
    printf("費氏數列第 %d 項是：%d\n", n, fib1(n));
    printf("費氏數列第 %d 項是：%d\n", n, fib2(n));
    return 0;
}