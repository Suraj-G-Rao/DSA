// C++ program to illustrate the function like macros 
#include <iostream> 
using namespace std; 

// Define a macro to print a value 
#define PRINT(x) cout << "Value is: " << x 

int main() 
{ 
	int value = 42; 

	// Print the value using the PRINT macro 
	PRINT(value); 
	return 0; 
}
