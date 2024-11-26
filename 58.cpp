//program to read two arrays of 10 integers and store addition of those arrays into third

#include<stdio.h>
int main(){

int arr1[10], arr2[10], sumArr[10];

printf("Enter 10 integers for the first array :\n");
for(int i=0;i<10;i++){
	printf("element%d :",i+1);
	scanf("%d", &arr1[i]);
}	
printf("Enter 10 integers for the second array :\n");
for(int i=0;i<10;i++){
	printf("element%d :",i+1);
	scanf("%d", &arr2[i]);
}		
//calculate the sum of arrays
for(int i=0; i<10; i++){
	sumArr[i] =arr1[i] +arr2[i];
	}
	printf("\nSum of the two arrays:\n ");
	for(int i=0;i<10;i++){
		printf("element %d: %d\n", i+1, sumArr[i]);
	}


	return 0;
}
