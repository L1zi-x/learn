#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int monkey[1001];
    int i;
    //初始化，1代表猴子还在圈内，0表示退出
    for(i = 1; i <= n; i++){
        monkey[i] = 1;
    }

    int count = 0;   //报数计数器
    int left = n;    //剩余猴子数量
    int pos = 0;     //当前位置

    while(left > 1)
    {
        pos++;
        if(pos > n) pos = 1; //循环围成圈

        if(monkey[pos] == 1) //猴子还活着就报数
        {
            count++;
            if(count == 3)
            {
                monkey[pos] = 0; //出局
                left--;
                count = 0; //报数重置
            }
        }
    }
    //剩下的编号
    for(i = 1; i <= n; i++)
    {
        if(monkey[i] == 1)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
