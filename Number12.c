#include <ctype.h> 
#include <stdio.h> 

int main() 
{ 
	int j = 0; 
	char str[] = "hello world\n";
	char ch; 

	while (str[j]) { 
		ch = str[j]; 
		putchar(toupper(ch)); 
		j++; 
	} 

	return 0; 
} 
