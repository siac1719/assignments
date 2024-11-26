//program to read a 3*3 matrix and print its transpose

#include<stdio.h>
int main(){
	int i,j;
	int transpose[3][3];
	int matrix[3][3];
	
	printf("enter the elements of the array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element[%d][%d]=", i+1,j+1);
			scanf("%d", &matrix[i][j]);
		}
}
//calculate the transpose
for(i=0; i<3; i++){
	for(j=0;j<3;j++){
		 transpose[j][i]=matrix[i][j];
	}
}
	printf("transpose of the matrix:\n");
	for(i=0; i<3; i++){
	for(j=0;j<3;j++){
		printf("%d\n", transpose[i][j]);
	}
}

return 0;
}
