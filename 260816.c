#include <stdio.h>
int main()
{
		int a,b,min;
		int *pa,*pb,*pmin;
		
		pa = &a;
		pb = &b;
		pmin = &min;
		
		printf("Please Enter a&b:\n");
		scanf("%d %d",pa,pb);
		
		if(*pa < *pb)
		{
			*pmin = *pa;
			printf("min=%d",*pmin);
		}
		else if(*pb < *pa)
		{
			*pmin = *pb;
			printf("min=%d",*pmin);
		}
		else
		{
			printf("a=b=%d",*pa);
		}
		return 0;
}
