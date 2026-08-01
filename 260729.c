#include <stdio.h>

int main()
{

    int a;
	int b;
	int t;
	
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("×î´ó¹«Ô¼ÊýÊÇ%d",a);

    return 0;

