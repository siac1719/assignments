//program to read an array of 10 integers and count total no of positive, negative and zero elements

#include<stdio.h>
int main(){
	int arr[10], positive=0, negative=0, zero=0;
	
	printf("Enter 10 integers:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<10;i++){
		if(arr[i]>0){
			positive++;
		}else if(arr[i]<0){
			negative++;
		}else{
			zero++;
		}
	}
printf("Number of positive elements:%d\n",positive);
printf("Number of negative elements:%d\n",negative);
printf("Number of zero elements:%d\n",zero);

return 0;
	}
