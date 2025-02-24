//a031: 顯示變數的視域範圍
#include <stdio.h>
int global_var = 10; // 全域變數
void func(int param) { // 函式參數 param 具有函式視域
    int local_var = 20; // 區域變數，具有函式視域
    if (param > 0) {
        int block_var = 30; // 區域變數，具有區塊視域
        printf("block_var: %d\n", block_var);
        printf("local_var: %d\n", local_var);
        printf("global_var: %d\n", global_var);
    }
    printf("local_var: %d\n", local_var);
    printf("global_var: %d\n", global_var);
    // printf("block_var: %d\n", block_var); // 錯誤：block_var 超出視域
}
int main() {
    func(1);
    printf("global_var: %d\n", global_var);
    // printf("local_var: %d\n", local_var); // 錯誤：local_var 超出視域
    return 0;
}