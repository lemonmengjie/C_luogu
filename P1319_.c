#include<stdio.h>

int main() {
    int a[40000];
    int len = 0;
    int ch; // 用于读取字符

    // 使用循环读取整行输入，直到遇到换行符
    while ((ch = getchar()) != '\n' && ch != EOF) {
        ungetc(ch, stdin); // 将读取的字符放回输入流
        if (scanf("%d", &a[len]) == 1) {
            len++;
        } else {
            // 如果读取失败，可能是由于非数字字符，可以在这里处理错误
            printf("Input error.\n");
            return 1;
        }
    }

    int num = 0;
    int n = a[0]; // 假设第一个数字是n
    for (int index_arr = 0, total_num = 0; index_arr < len - 1; index_arr++) {
        for (int i = 0; i < a[index_arr + 1]; i++) {
            if (total_num % n == 0 && total_num != 0) {
                printf("\n");
            }
            printf("%d", num);
            total_num++;
        }
        num = 1 - num; // 切换数字
    }
    printf("\n\n"); // 输出两个换行符
    return 0;
}
