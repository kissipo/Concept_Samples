//a033:階乘的範例
#include <stdio.h>
int factorial1(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial1(n - 1);
    }
}
int factorial2(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    printf("%d 的階乘是：%d\n", n, factorial1(n));
    printf("%d 的階乘是：%d\n", n, factorial2(n));
    return 0;
}