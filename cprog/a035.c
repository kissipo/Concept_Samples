//a035: 線性搜尋
#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // 找到目標元素，返回索引
        }
    }
    return -1; // 未找到目標元素，返回 -1
}
int main() {
    int arr[] = {2, 5, 8, 1, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = linearSearch(arr, n, target);

    if (index != -1) {
        printf("目標元素 %d 在索引 %d 處找到。\n", target, index);
    } else {
        printf("目標元素 %d 未找到。\n", target);
    }
    return 0;
}