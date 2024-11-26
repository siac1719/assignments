//earth takes a period of revolution of 31558150 seconds.write a c program to convert this into number of days,hours and minutes

#include <stdio.h>

int main()
{
  int ts, days, hrs, mins, secs;
  printf("Earth takes a period of revolution of 31558150 seconds. ") ;
  ts= 31558150;
//Converting total seconds into hours, minutes and secondsint days, hours, minutes;

    // Convert seconds to minutes
    mins = ts / 60;
    ts %= 60;

    // Convert minutes to hours
    hrs = mins / 60;
    mins %= 60;

    // Convert hours to days
    days = hrs / 24;
    hrs %= 24;

    printf("Earth's period of revolution is:\n");
    printf("%d days, %d hours, and %d minutes.\n", days, hrs, mins);

    return 0;
}

