#include <stdio.h>

int main()
{
	int x;
	int number[100];
	double sum = 0;
	int cnt = 0;
	
	scanf("%d", &x);
	
	while(x != -1){
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	if(cnt > 0){
		double avg = sum / cnt;
		printf("Æ½¾ùÖµ£º%f\n", avg);
		int i;
		for(i = 0; i < cnt; i++){
			if(number[i] > avg){
				printf("%d ", number[i]);
			}
		}
	}
	return 0;
}
