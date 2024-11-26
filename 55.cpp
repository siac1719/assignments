//program to read an array of 10 integer and count total no of odd and total no of even no

#include<stdio.h>
int main(){
	int arr[10];
	int odd=0, even=0, i, j;
	int count[100]= {0};
	
	printf("enter 10 integers:\n");
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	
//count even and odd numbers
if(arr[i]%2 ==0 ){
	even++;
}else{
	odd++;
}
//count occurences of each element
count[arr[i]]++;
}
  printf("Number of odd elements:%d\n",odd);
  printf("Number of even elements:%d\n",even);
  
  return 0;

}
