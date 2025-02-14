//a010: 選擇敘述 (Selection Statements)
//說明 選擇敘述的使用
#include <stdio.h>
int main() {
    int x = 10;
    int day = 2;
    if (x > 0) {
        printf("x is positive");
    } else if (x < 0) {
        printf("x is negative");
    } else {
        printf("x is zero");
    }
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        default:
            printf("Invalid day");
    }      // 遞增敘述
  return 0;
}