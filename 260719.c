#include <stdio.h>

int main()
{
    int grade;
    
    scanf("%d",&grade);
    if(grade>100)
    {
	printf("?");
    return 0;
	}
	if(grade<0)
	{
	printf("?");
	return 0;
	}
    grade/=10;
    
    switch(grade){
    case 10:
    case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
    return 0;
}
