#include <stdio.h>
int add(int a,int b){
	return a+b;
} 

int main()
{
	int x;
	int y;
	scanf("%d %d",&x,&y);
	int c = add(x,y);

	printf("%d",c);
	
return 0;
}
