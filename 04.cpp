//program to convert tmperature from fahrenheit to centrigade degrees

#include<stdio.h>
int main(){
	float fahrenheit, centrigade;
	
	printf("Enter the temperatue in Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	centrigade= (fahrenheit-32)*5/9; //conversion formula
	printf("Temperature in Centrigade %f\n:", centrigade );
	
	return 0;
}
