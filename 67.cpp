//program to read two 3*3 matrices and subtract their values and store in third array

#include<stdio.h>
int main(){
	int i,j;
	int matrix1[3][3], matrix2[3][3], sub[3][3];
	
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
//calculate the difference of the two matrices
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
sub[i][j]= matrix1[i][j] -matrix2[i][j];		
	}
}
//print the resultant matrix
printf("Difference of the two matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", sub[i][j]);
		} printf("\n");
}

return 0;
}


