 //program to calculate factorial of a number
 
 #include<stdio.h>
 
 int main(){
 	int n, fact=1;
 	
 	printf("Enter a non-negative integer:");
 	scanf("%d",&n);
 	
 	for(int i=1;i<=n; i++){
 		fact *=i;
	 }
 	printf("factorial of %d is %d\n",n,fact);
 return 0;
 }
