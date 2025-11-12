#include<stdio.h>

int main(){
	
	int n,i = 1;
	printf("enter the number for table");
	scanf("%d",&n);
	
	while(i <=  10){
		printf("%d\n", i * n);
		i++;	
	}
	return 0;
}