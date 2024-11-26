//function exchange to interchange the value of two variable ,say y and x
#include<stdio.h>
void exchange( int*x, int*y){
	int temp= *x;
	*x= *y;
	*y= temp;
}
int main(){
	int x,y;
	printf("Enter value of variable x and y\n",x,y);
	scanf("%d\t%d",&x,&y );
	
	exchange(&x,&y);
	printf("\nAfter interchanging their values:");
	printf("x=%d, y=%d", x,y);
	
	return 0;
}
