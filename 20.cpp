//program which will work as a simple calculator using switch case

#include<stdio.h>

int main(){
	char op;
	double a,b;
	
	printf("Enter an operator(+,-,*,/): ");
	scanf("%c",&op);
	
	printf("Enter two numbers:");
	scanf("%lf %lf", &a,&b);
	
 switch(op){
    	case '+':printf(" %lf +%lf =%lf", a,b,a+b);
        break;
    	case '-':printf(" %lf -%lf =%lf", a,b,a-b);
	    break; 
        case '*':printf("%lf*%lf =%lf", a,b,a*b);
		break;
		case '/': if(b==0){
			printf("Error\n");   
			}else{
			printf("%lf/%lf =%lf",a,b,a/b);			
			}
			break;
		default: printf("Error\n");
			
		}
		
	return 0;
}
