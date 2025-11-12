#include<stdio.h>

int main(){
	int n , sum;
	printf("entrer the intiger number siries until you pres 0 to sum the numbers\n");
	
	while(1){
	
	scanf("%d",&n);
	if (n == 0){
		break;
	}
	if(n > 0){
		sum += n;
	}
	
	}
	printf("sum of all number is %d",sum);
	
	return 0;
}
	