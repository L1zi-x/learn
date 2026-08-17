#include <stdio.h>
#define MAX 100015

int main()
{
    int A, N;
    int ans[MAX] = {0};
    int i;
    int carry = 0;

    scanf("%d %d", &A, &N);

    if(N == 0)
    {
        printf("0\n");
        return 0;
    }

    for(i = 1; i <= N; i++)
    {
        long long total = (long long)(N - i + 1) * A + carry;
        ans[i] = total % 10;
        carry = total / 10;
    }

    if(carry != 0)
    {
        ans[N + 1] = carry;
        N = N + 1;
    }

    for(i = N; i >= 1; i--)
    {
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}
