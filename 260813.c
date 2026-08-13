#include <stdio.h>

int main()
{
    char pingyin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int n;
    int digit[20];
    int len = 0;
    int i;
    int first = 1;

    scanf("%d", &n);

    if(n < 0)
    {
        printf("fu");
        first = 0;
        n = -n;
    }

    if(n == 0)
    {
        if(!first) printf(" ");
        printf("ling");
        return 0;
    }

    while(n > 0)
    {
        digit[len++] = n % 10;
        n = n / 10;
    }

    for(i = len - 1; i >= 0; i--)
    {
        if(!first)
        {
            printf(" ");
        }
        printf("%s", pingyin[digit[i]]);
        first = 0;
    }

    return 0;
}
