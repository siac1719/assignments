//program to read an array of 10 integer and print sum of numbers

#include<stdio.h>

int main(){
	int arr[10], i, sum=0;
	
	printf("Enter 10 integers:\n");
	for(i=0; i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++){
		sum+= arr[i];
	}
	printf("sum of the numbers:%d\n", sum);
	return 0;
}


