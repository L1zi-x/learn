#include <stdio.h>

int main()
{
    int i, j, k;

    // 上半部分：正三角（10行）
    for (i = 1; i <= 10; i++) {
        // 打印前置空格：随行数增加而减少
        for (k = 1; k <= 10 - i; k++) {
            printf(" ");
        }
        // 打印星号：每行 2*i-1 个
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半部分：倒三角（9行，避免重复最长行，形成标准菱形）
    for (i = 9; i >= 1; i--) {
        // 打印前置空格：随行数减少而减少
        for (k = 1; k <= 10 - i; k++) {
            printf(" ");
        }
        // 打印星号：每行 2*i-1 个
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
