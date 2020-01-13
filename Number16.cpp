#include <iostream> 
#include <string> 

using namespace std; 

int main() 
{ 
	string str = "jeruk apel anggur pepaya pisang kiwi markisa"; 
	string str1 = "anggur"; 

	// Find first occurrence of "geeks" 
	size_t found = str.find(str1); 
	if (found != string::npos) 
		cout << "First occurrence is " << found << endl; 

	char arr[] = "anggur"; 
	found = str.find(arr, found+1); 
	if (found != string::npos) 
		cout << "Next occurrence is " << found << endl; 

	return 0; 
} 
