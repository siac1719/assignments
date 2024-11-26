//program to find length of a given string including and excluding spaces using pointers 

#include<stdio.h>

//function to calculate length of the string including spaces
int lengthwspaces(char *str){
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

//function to calculate lentgh of the string excluding spaces
int lengthwospaces(char *str){
	int count=0;
	while(*str !='\0'){
		if(*str != ' '){
			count++;
		}
		str++;
	}
	return count;
}

int main(){
	char str[100];
	printf("enter a string: ");
	fgets(str, sizeof(str),stdin);
	
	char *newline = str;
	while(*newline != '\0'){
		if(*newline =='\n'){
			*newline= '\0';
			break;
		}
		newline++;
	}
	
	int lengthwithspaces = lengthwspaces(str);
	int lengthwithoutspaces= lengthwospaces(str);
	
	printf("length including spaces: %d\n", lengthwithspaces);
	printf("length excluding spaces: %d\n", lengthwithoutspaces);
	
	return 0;
	
	
}
