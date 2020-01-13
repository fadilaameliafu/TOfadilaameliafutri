/* structure is used to return two values from minMax() */
#include<stdio.h> 
struct pair 
{ 
int min; 
int max;
int average;
}; 

struct pair getMinMax(int arr[], int n) 
{ 
struct pair minmax;	 
int i; 
	

if (n == 1) 
{ 
	minmax.max = arr[0]; 
	minmax.min = arr[0];
	return minmax; 
}	 


if (arr[0] > arr[1]) 
{ 
	minmax.max = arr[0]; 
	minmax.min = arr[1]; 
} 
else
{ 
	minmax.max = arr[1]; 
	minmax.min = arr[0]; 
}	 

for (i = 2; i<n; i++) 
{ 
	if (arr[i] > minmax.max)	 
	minmax.max = arr[i]; 
	
	else if (arr[i] < minmax.min)	 
	minmax.min = arr[i]; 
} 
	
return minmax; 
} 

/* Driver program to test above function */
int main() 
{ 
int arr[] = {2, 4, 54, 12, -65, 19, 40, 92, 88, 330, -4, 54}; 
int arr_size = 12; 
struct pair minmax = getMinMax (arr, arr_size); 
printf("nMinimum element is %d", minmax.min); 
printf("nMaximum element is %d", minmax.max); 
printf("nAverage element is %d", minmax.average); 
getchar(); 
} 
