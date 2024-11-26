//program to read marks of five subjects of a student and calculate total and percentage

#include<stdio.h>
int main(){
	float English, Maths, ICS, IOP, ENA, total, percentage;
	
	printf("Enter marks of the subjects:-\n");
	printf("English:");       scanf("%f", &English);
	printf("Mathematics:");   scanf("%f", &Maths);
	printf("ICS: ");          scanf("%f", &ICS);
	printf("IOP: ");          scanf("%f", &IOP);
	printf("ENA: ");          scanf("%f", &ENA);
	
	total= English+ IOP+ ICS+ ENA+ Maths;
	percentage= (total/500)*100;
	
	printf("Total marks obtained: %f\n", total);
	printf("Percentage: %f", percentage);
	
return 0;
}
