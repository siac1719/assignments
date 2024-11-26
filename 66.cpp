//program to read two 3*3 matrices and add their values and store in third array

#include<stdio.h>
int main(){
	int i,j;
	int matrix1[3][3], matrix2[3][3], sum[3][3];
	
	printf("enter the elements of the first array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element[%d][%d]=", i+1,j+1);
			scanf("%d", &matrix1[i][j]);
        
    }
}
	printf("enter the elements of the second array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element[%d][%d]=", i+1,j+1);
			scanf("%d", &matrix2[i][j]);
		}	
}
//calculate the sum of the two matrices
for(i=0; i<3; i++){
	for(j=0;j<3;j++){
		sum[i][j] =matrix1[i][j] +matrix2[i][j];
			}
}		
//print the resultant array
printf("sum of the two matrices:\n");
for(i=0; i<3; i++){
	for(j=0;j<3;j++){
		printf("%d", sum[i][j]);
	}   printf("\n");
}
return 0;
}

