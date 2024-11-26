//program to sort (bubble sort) an array

#include<stdio.h>

int main(){
	
	int n,i=0,j=0,temp=0;

	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter elements of the array: \n");
	for( i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
//bubble sort algorithm
for(i=0; i<n-1; i++){
	for(j=0; j<n-1-i; j++){
	
	if( arr[j]>arr[j+1]){
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
    }
   }
 }
//print the sorted array
printf("sorted array:\n");
for(i=0; i<n; i++){
	printf("%d\t", arr[i]);
 }
 return 0;
}
	

