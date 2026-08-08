#include <stdio.h>
#include <windows.h>
int main()
{
    int day;
    char k;
A: 
	day = 1;  
    while (1)
    {
        Sleep(200);
        printf("假期第%d天真好玩\n", day);
        day++;
        if (day ==8){
            printf("是否要回到第一天?(y/n)");
            scanf(" %c", &k);
            if (k == 'y')
                goto A;
            else
                goto B;
        }
    }
B:    
    printf("假期结束了\n");
    return 0;
}
