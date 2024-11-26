//program using pointers to find the biggest of given list of n integers

#include<stdio.h>

//function to find the bigggest integer in an array 
int findlargest(int *arr, int n){
	int *ptr= arr;
	int largest = *ptr;
	
	for(int i=1;i<n;i++){
		ptr++;
		if(*ptr>largest){
			largest=*ptr;
		}
	}
	return largest;
}
int main(){
	int n;
	printf("enter the no of integers;");
	scanf("%d", &n);
	
	if(n<=0){
		printf("invalid input");
    return 1;
	}
	int arr[n];
	printf("enter %d integers:\n", n);
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}
int biggestno= findlargest(arr, n);
printf("the largest integer is: %d\n", biggestno);

return 0;
	
	
	
}
