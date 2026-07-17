#include <stdio.h>

int main()
{
	const double RATE=8.25;
	const double STANDARD=40; 
    double pay=0.0;
    int hours;
    
    printf("work hour");
    scanf("%d",&hours);
    printf("\n");
    
    if (hours>STANDARD)
    
    pay=STANDARD*RATE+(hours>STANDARD)*(RATE*1.5 );
    else
    
    pay=hours*RATE;
    printf("%f\n",pay);
    
return 0;
}

