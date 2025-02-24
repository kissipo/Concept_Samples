//a021:二維陣列的宣告和初始化
// 二維陣列包含多個一維陣列，每個一維陣列又包含多個元素。
#include <stdio.h>

int main() {
    int scores[3][4] = { // 3 個學生，每人 4 門科目
        {80, 90, 85, 95},
        {75, 85, 90, 80},
        {90, 95, 85, 90}
    };

    float averages[3] = {0}; // 儲存每個學生的平均成績

    for (int i = 0; i < 3; i++) { // 遍歷每個學生
        for (int j = 0; j < 4; j++) { // 遍歷每門科目
            averages[i] += scores[i][j];
        }
        averages[i] /= 4; // 計算平均成績
        printf("學生 %d 的平均成績：%.2f\n", i + 1, averages[i]);
    }

    return 0;
}