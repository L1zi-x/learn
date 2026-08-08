#include <stdio.h>
int isprime(int x)
{
	int ret=1;
	int i;
	if(x==1|| x&2==0 && x!=2)
	ret=0;
	for(i=3;i<x;i+=2){
		if(x % i==0){
		ret=0;
		break;
		}
	}	
}
int main(void)
{
	int x;
	scanf("%d",&x);
	if(isprime(x)){
		printf("%d是素数",x);
	}else{
		printf("%d不是素数",x); 
	}
	
	return 0;
} 
