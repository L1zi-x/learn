#include <stdio.h>
#include <math.h>

// 打印复数函数 
void printComplex(double real, double imag)
{
	// 四舍五入
    real = round(real * 10) / 10.0;
    imag = round(imag * 10) / 10.0;
    
	// 结果为0
    if(fabs(real) < 1e-6 && fabs(imag) < 1e-6)
    {
        printf("0.0");
        return;
    }
	// 只有实部
    if(fabs(imag) < 1e-6)
    {
        printf("%.1f", real);
        return;
    }
	 // 只有虚部
    if(fabs(real) < 1e-6)
    {
        printf("%.1fi", imag);
        return;
    }
    // 实部虚部都有
    printf("%.1f", real);
    if(imag > 0)
        printf("+%.1fi", imag);
    else
        printf("%.1fi", imag);
}

int main()
{
    double a1, b1, a2, b2;
    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
    double sumR, sumI;    // 和
    double subR, subI;    // 差
    double mulR, mulI;    // 积
    double divR, divI;    // 商

    // 和
    sumR = a1 + a2;
    sumI = b1 + b2;
    // 差
    subR = a1 - a2;
    subI = b1 - b2;
    // 积
    mulR = a1*a2 - b1*b2;
    mulI = a1*b2 + b1*a2;
    // 商
    double denom = a2*a2 + b2*b2;
    divR = (a1*a2 + b1*b2) / denom;
    divI = (b1*a2 - a1*b2) / denom;

    // 和
    printf("(%.1f%+.1fi) + (%.1f%+.1fi) = ", a1, b1, a2, b2);
    printComplex(sumR, sumI);
    printf("\n");
    // 差
    printf("(%.1f%+.1fi) - (%.1f%+.1fi) = ", a1, b1, a2, b2);
    printComplex(subR, subI);
    printf("\n");
    // 积
    printf("(%.1f%+.1fi) * (%.1f%+.1fi) = ", a1, b1, a2, b2);
    printComplex(mulR, mulI);
    printf("\n");
    // 商
    printf("(%.1f%+.1fi) / (%.1f%+.1fi) = ", a1, b1, a2, b2);
    printComplex(divR, divI);
    printf("\n");

    return 0;
}
