#include <stdio.h>

// 求最大公约数
int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int a1, b1, a2, b2;
    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);

    int numerator = a1 * b2 + a2 * b1;   // 和的分子
    int denominator = b1 * b2;           // 和的分母

    int g = gcd(numerator, denominator);

    int num = numerator / g;
    int den = denominator / g;

    if(den == 1)
    {
        printf("%d\n", num);
    }
    else
    {
        printf("%d/%d\n", num, den);
    }

    return 0;
}
