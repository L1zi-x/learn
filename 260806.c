#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//新学的随机数函数 
	srand((unsigned int)time(NULL));
	int num = rand()%100 + 1;
	int a;
	
	printf("猜数字：");
	while(1){
		scanf("%d",&a);
		if(a==num){
			printf("猜对了");
			break; 
		}else if(a<num){
			printf("猜小了"); 
		}else{
			printf("猜大了"); 
		} 
	}
	return 0;	
}
