//program to find the value of y

#include<stdio.h>
#include<math.h>
int main(){
int x, n;

printf("Enter teh value of x:\n");
scanf("%d",&x);

printf("Enter the value of n:\n");
scanf("%d",&n);

if(n==1){
  printf("y=%d", 1+x);
}else if(n==2){
  printf("y=%d", 1+x/n);
}else if(n==3){
  printf("y=%d", 1+ pow(x,n));
}else{ 
printf("y=%d", 1+n*x);
}

return 0;
}

