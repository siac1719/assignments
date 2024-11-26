//program to sort (selection sort) an array

#include<stdio.h>
int main(){
	int n,i,j,temp,min;

	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter elements of the array: \n");
	for( i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

//selection sort algorithm
    for( i=0; i<n; i++){
    	min= i;
    	for(j=i+1; j<n; j++){
    		if( arr[j]< arr[min]){
    			min= j;
			}
		}
    temp= arr[min];
	arr[min]=arr[i];
	arr[i]=temp;	
    }
//print the sorted array
    printf("sorted array:\n");
	for(i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
