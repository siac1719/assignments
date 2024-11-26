//program to read total second and convert it into time
#include <stdio.h>

int main()
{
int ts, hrs, mins, secs;
printf("Enter the total seconds:");
scanf("%d", &ts) ;
//Converting total seconds into hours, minutes and seconds
hrs= ts/3600;
ts%=3600;
mins=ts/60;
secs=ts%60;
 
 printf("The converted time is: %d hours, %d minutes, %d seconds \n",hrs,mins,secs);
 return 0;
 }
