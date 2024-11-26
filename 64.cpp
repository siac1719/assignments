//program to read a 3*3 matrix and print sum of all rows

#include<stdio.h>
int main(){
	int i,j, sum=0;
	int matrix[3][3];
	
	printf("enter the elements of the array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element[%d][%d]=", i+1,j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
//calculate and print the sum of each row
printf("sum of each row:\n");
for(i=0; i<3; i++){
	sum=0;
	for(j=0; j<3;j++){
		sum+=matrix[i][j];
	}
printf("sum of row %d: %d\n", i+1, sum);	
}	
	
}
