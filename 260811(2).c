#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int sum = 0;
    int cnt = 0;

    for (int i = A; i <= B; i++)
    {
        sum += i;
        printf("%5d", i);
        cnt++;
        if (cnt % 5 == 0)
            printf("\n");
    }
    if (cnt % 5 != 0)
        printf("\n");
    printf("Sum = %d", sum);
    return 0;
}
