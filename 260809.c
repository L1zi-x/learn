#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    int* a;
    int i; 

    printf("请输入数量：");
    scanf("%d", &number);


    a = (int*)malloc(number * sizeof(int));

    printf("请依次输入%d个整数：\n", number);
    for (i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("逆序输出：");
    for (i = number - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);  

    return 0;
}
