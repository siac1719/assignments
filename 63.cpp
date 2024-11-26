//program to read a 3*3 matrix and findout min and max

#include<stdio.h>
int main(){
	int matrix[3][3];
	int i,j,min,max;
	
printf("Enter the elements of the 3*3 matrix:\n ");
for(i=0; i<3;i++){
   for(j=0; j<3; j++){
   	printf("element[%d][%d]:", i+1, j+1);
   	scanf("%d", &matrix[i][j]);
   }
 }
max= min =matrix[0][0];
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(matrix[i][j]> max){
			max= matrix[i][j];
		}
		if(matrix[i][j]<min){
			min= matrix[i][j];
		}
	}
}
//print the maximum and minimum elements
printf("maximum elements: %d\n",max);
printf("minimum elements:%d\n", min);

return 0;	
}
