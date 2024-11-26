//function to check whether a number is armstrong or not

#include<stdio.h>
#include<math.h>

int armstrong(int num){
	int n=0, remainder=0, result=0;
	
//count the number of digits
    while(num!=0){
        num/=10;
	    ++n;
    } 	
//calculate the sum of the powers of digits
    while(num=!0){
    	remainder= num%10;
    	result+=pow(remainder,n);
    	num/=10;
	}
return num==result;	
}

int main(){
	int no;
    printf("enter a number:");
    scanf("%d",&no);
    
    if(armstrong(no)){
    	printf("%d is an Armstrong number.\n",no);
	}else{
		printf("% is not an Armstrong number.\n",no);
	}
return 0;	
}
