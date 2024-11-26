//program to read three a character and check whether it is a small case letter or not,  using conditional operator

#include<stdio.h>

int main(){
	char ch;
	
	printf("Enter the character:");
	scanf("%c",&ch);
	
	(ch>='a' && ch<='z')?printf("%c is a lowercase letter.\n",ch):printf("%c is not a lowercase letter.\n",ch);
	
	return 0;
	
}
