//program to calculate simple interest

#include<stdio.h>
int main() {
	float principle, roi, time, si;
    printf("Enter the principal amount:");
	scanf("%f",&principle);
	printf("Enter the rate of interest:");
	scanf("%f", &roi);
	printf("Enter the time period:");
	scanf("%f", &time);
	
	si= (principle*roi*time)/100 ;
	 printf(" SIMPLE INTEREST= %f",si);
	 return 0;
	
	
}
