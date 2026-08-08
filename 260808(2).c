#include <stdio.h>

void swap(int *pa,int *pb);
 
int main(void)
{
	int a,b; 
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	
	return 0;
} 

void swap(int *pa,int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
