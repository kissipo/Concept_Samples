#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("請輸入您的姓名：");
    scanf("%s", name); // 讀取字串，存入 name 陣列

    printf("請輸入您的年齡：");
    scanf("%d", &age); // 讀取整數，存入 age 變數，注意要使用 & 取地址

    printf("您好，%s！您的年齡是 %d 歲。\n", name, age);

    return 0;
}