//function to check if a number is a palindrome

#include<stdio.h>

int palindrome(int num){
	
	int originalNo= num;
	int reversedNo= 0;
	
//reverse the number
while(num>0){
	int digit= num%10;
	reversedNo= reversedNo* 10+ digit;
	num/=10;
}
	return originalNo== reversedNo;
}
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(palindrome(n)){
		printf("%d is a palindrome number.\n", n);
	}else{
		printf("%d is not a palindrome number.\n",n);
	}
	return 0;
}
