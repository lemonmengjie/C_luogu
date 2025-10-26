#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 读取正整数的个数

    int num[100]; // 假设最大的n为100
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]); // 读取每个正整数
    }

    int count = 0; // 用于计数满足条件的数的个数
    // 三重循环找出所有可能的三元组
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (num[i] + num[j] == num[k]) {
                    count++; // 如果找到满足条件的三元组，计数增加
                }
                if (num[i] + num[k] == num[j]) {
                    count++; // 同样检查另一种组合
                }
                if (num[j] + num[k] == num[i]) {
                    count++; // 检查第三种组合
                }
            }
        }
    }

    printf("%d\n", count); // 输出结果
    return 0;
}
