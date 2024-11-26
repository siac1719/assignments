//program to read n nos and findout max and second max

#include<stdio.h>
int main(){
int N;

printf("enter the number of elements:");
scanf("%d", &N);

int numbers[N];
int Max= -21474836487;          //initialize max to the smallest integer
int secondMax= -21474836487;	//initialize second max
	
	printf("enter %d integers:\n",N);
	for(int i=0; i<N; i++){
	printf("number%d ", i+1);
	scanf("%d",&numbers[i]);
	
	//finding max and secondmax
	if(numbers[i]>Max){
		secondMax = Max;
	    Max= numbers[i];
	}else if(numbers[i]> secondMax && numbers[i]< Max ){
		secondMax =numbers[i];
		} 
	}
	if(secondMax == -2147483648){
		printf("There is no second maximum number");
	} else {
		printf("Maximum: %d\n",  Max);
		printf("Second Maximum:%d\n", secondMax);
		
	}
	
	return 0;
}

