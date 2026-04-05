// C++ program to illustrate the chain macros 
#include <iostream> 
using namespace std; 

// defining first macro 
#define CLERK 10 

// defining second macro 
#define WORKER CLERK 

int main() 
{ 

	// checking value of worker 
	cout << WORKER; 
	
	return 0; 
}
