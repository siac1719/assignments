//program to reverse an array

#include<stdio.h>
int main(){
	int n,i;
	printf("enter the no of elements in the array:\n");
	scanf("%d",&n);
	
	int array[n], arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
	scanf("%d\n", &array[i]);
	arr[i]=array[i];
	}
	
	for(i=0;i<n;i++){
		array[i]= arr[n-i-1];
        	
	}
	printf("reversed array:");
	for(i=0;i<n;i++){
		printf("%d\n", array[i]);
	}
	return 0;
}
