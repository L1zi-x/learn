#include <stdio.h>

int main()
{
    double eps;
    scanf("%lf", &eps);
    
    double pi_half = 1.0;
    double term = 1.0;
    int n = 1;
    
    while (term >= eps)
    {
        term = term * n / (2 * n + 1);
        pi_half += term;
        n++;
    }
    double pi = 2 * pi_half;
    printf("%.6f", pi);
    return 0;
}
