#include <stdio.h>

int main()
{
    srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0; 
	printf("我已经想好了一个1-100的数字\n");
	do{
	printf("请猜测这个1-100之间的数\n:"); 
	scanf("%d",&a);
	count++;
	if(a>number){
		printf("你猜的数字大了");
	} else if (a<number){
		printf("你猜的数字小了"); 
	}
	}while(a!=number);
	printf("恭喜你用了%d次猜对了答案",count); 

    return 0;
}
