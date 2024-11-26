//program to read two arrays of 10 integers and swap values of these arrays

#include<stdio.h>
int main(){
	int arr1[10], arr2[10];
	
	printf("enter 10 integers for the first array:\n");
	for(int i=0;i<10;i++){
		printf("element%d:", i+1);
	scanf("%d",arr1[i]);
}
	printf("enter 10 integers for the second array:\n");
	for(int i=0;i<10;i++){
		printf("element%d:", i+1);
	scanf("%d",arr2[i]);
} 
//swap the values
for(int i=0;i<10;i++){  int temp= arr1[i];
                        arr1[i]= arr2[i];
                        arr2[i]= temp;  }
                        
//print the swapped values
printf("\nAfter swapping:-\n");

printf("First array:\n");
for(int i=0; i<10; i++){
	printf("element%d: %d\n", i+1, arr1[i]);
}
printf("Second array:\n");
for(int i=0; i<10;i++){
	printf("element%d: %d\n", i+1, arr2[i]);
}	
	return 0;
}
