#include <stdio.h>
int main()
{
    printf("请输入月份：");
    int month;
    scanf("%d", &month);

    char *months[] = {
    	"", 
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    if(month >=1 && month <=12)
    {
        printf("%s\n", months[month]);
    }
    else
    {
        printf("输入错误\n");
    }

    return 0;
}
