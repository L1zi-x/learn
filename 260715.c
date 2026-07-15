#include <stdio.h>

int main()
{
//初始化
    int price=0;
    int bill=0;
//界面
    printf("请输入金额");
    scanf("%d",&price);
	printf("请输入票面");
	scanf("%d",&bill);
//计算
	if (bill>=price){
	printf("找你%d元\n",bill-price);	
	} else{
	printf("票额不足，还需要%d\n",price-bill);
	}
    return 0;
}
