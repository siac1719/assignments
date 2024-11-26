//function to check if a number is odd or even

#include<stdio.h>

void evenodd(int num){
	if(num%2==0){
		printf("%d is an even number", num);
	}else{
		printf("%d is an odd number", num);
    }
}
int main(){
	int n;
	printf("enter a number:");
	scanf("%d", &n);
//call the function to check if the number is odd or even	
    evenodd(n);
	return 0;
}
