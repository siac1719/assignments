//program to read time in hr,min,sec and convert it into total seconds

#include <stdio.h>
int main()
 {
int hrs, mins, s, ts;

printf("Enter the time in hours, minutes, and seconds: ");
scanf("%d %d %d", &hrs, &mins, &s);

// Convert hours, minutes, and seconds to total seconds
ts = (hrs * 3600) + (mins * 60) + s;
printf("The total seconds are: %d\n", ts);

return 0;
}
