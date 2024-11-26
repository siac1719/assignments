//function that will generate and print the first n fibonacci numbers
#include<stdio.h>

void genfibo(int n){
	int first=0, second=1, next=0,i;
	printf("first %d fibonacci numbers:\n",n);
	
	for(i=0;i<n;i++){
		printf("%d", first);
		next= first+ second;
		second= next;
		printf("\n %d",next);
	}
	
}
int main(){
	int n;
	
	printf("enter the no of fibonacci numbers to generate:");
	scanf("%d", &n);
	
	genfibo(n);
	return 0;
}
