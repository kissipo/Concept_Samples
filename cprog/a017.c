//a017: 位元運算
//位元運算子 &、|、^、~、<<、>>
#include <stdio.h>

int main() {
    int a = 10; // 二進位：1010
    int b = 5;  // 二進位：0101

    printf("a & b = %d\n", a & b);   // 輸出：0
    printf("a | b = %d\n", a | b);   // 輸出：15
    printf("a ^ b = %d\n", a ^ b);   // 輸出：15
    printf("~a = %d\n", ~a);         // 輸出：-11
    printf("a << 2 = %d\n", a << 2); // 輸出：40
    printf("a >> 2 = %d\n", a >> 2); // 輸出：2

    return 0;
}