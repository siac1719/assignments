//program to swap two variables using third variable

#include<stdio.h>
int main(){
int a; int b; int temp;

printf("Enter the value of first variable:");
scanf("%d",a);
printf("Enter the value of the second variable:");
scanf("%d",b);

temp=a;
a=b;
b=temp;
printf("After swapping the values:- \n first variable: %d\n second variable: %d\n",a,b);
return 0;
}

