//program to read marks of five subject and print division
#include <stdio.h>

int main() {
    int p, q, r;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &p, &q, &r);

    // Use && to check if p is greater than both q and r
  if (p >= q && p>= r) {printf("%d is the largest number.", p);
    }
    // Use && to check if q is greater than both p and r
  else if (q >= p && q >= r) {printf("%d is the largest number.", q);
  }
    // If neither p not q is the largest, then num3 must be the largest
  else {printf("%d is the largest number.", r); 
  }
return 0;
}

