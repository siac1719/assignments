//program to check whether the no is even or odd

#include<stdio.h>
 int main() 
 {  
 int number;
 printf("Enter a number:");
 scanf("%d", &number) ;
 //Even numbers are divisible by 2
 if( number%2== 0) 
 {
 printf("%d is even\n",number);}
 else 
 {
 printf("%d is odd\n",number);}
 return 0;
 }
