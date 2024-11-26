//program to read marks of five subjects and print division

#include <stdio.h>

int main()
{
  int marks[5], total = 0, average;
  char division;

   printf("Enter marks for five subjects:\n ");
   for (int i = 0; i < 5; i++) {
   scanf("%d", &marks[i]);
   total += marks[i];
    }
// Calculate the average marks
   average = total / 5;
// To make divisions, condition to be followed
     if (average >= 75)      { division = 'A';}
     else if (average >= 60) { division = 'B';}
     else if (average >= 50) { division = 'C';}
     else if (average >= 40) { division = 'D';}
     else                    { division = 'F';}
    

   printf("Total Marks: %d\n", total);
   printf("Average Marks: %d\n", average);
   printf("Division: %c\n", division);

 return 0;
}
