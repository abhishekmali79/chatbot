#include<stdio.h>

int main(){
	
	int prod = 1, i = 1;
	int m;
	
	printf("enter the digit to count product 1 to your digit ");
	scanf("%d",&m);
	
	while (i<=m){
		prod *= i;
		
		i++;
		
	}
	
	printf("prod of num is %d",prod);
	return 0;
}