#include <stdio.h>

int main ()
{	
int a;
int b;
 
	printf("foot");
	scanf("%d", &a);
	
	printf("inch");
	scanf("%d",&b);
		
	printf("(%d + %d/12) * 0.3048= %f\n",a ,b ,(a + b/12.0) * 0.3048);
	
	return 0;
}


