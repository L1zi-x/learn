#include <stdio.h>
int main()
{
    int A,i,j,k; 
	int cnt=0;
    scanf("%d",&A);
    
    for(i=A;i<=A+3;i++)
        for(j=A;j<=A+3;j++)
            for(k=A;k<=A+3;k++)
                if(i!=j&&i!=k&&j!=k){
                    cnt&&printf(" ");
                    printf("%d%d%d",i,j,k);
                    if(++cnt%6==0)printf("\n");
                }
    return 0;
}
