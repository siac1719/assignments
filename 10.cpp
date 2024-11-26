//WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA CM = M/2+P/2+C/2+E

#include<stdio.h>
int main () {
int m, c, p, e, CM;
printf("Enter the marks of Maths",m);
scanf("%d",&m);
printf("Enter the marks of Chemistry",c);
scanf("%d",&c);
printf("Enter the marks of Physics",p);
scanf("%d",&p);
printf("Enter the entrance exam marks",e);
scanf("%d",&e);

CM = (m/2) + (p/2) + (c/2) + e;
printf(" The cutoff marks = %d", CM) ;

return 0;
}

