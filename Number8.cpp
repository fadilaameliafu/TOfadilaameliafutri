#include <stdio.h> 
#include <stdbool.h> 

bool checkYear(int year) 
{ 

return (((year % 4 == 0) && (year % 100 != 0)) || 
		(year % 400 == 0)); 
} 

// driver code 
int main() 
{ 
	int year = 2019; 

	checkYear(year)? printf("Leap Year"): 
				printf("Not a Leap Year"); 
	return 0; 
} 
