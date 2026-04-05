// C++ program to illustrate the predefined macros 
#include <iostream> 
using namespace std; 

int main() 
{ 

	// Display the current line number and the source file 
	// name 
	cout << "This is line " << __LINE__ << " in file "<< __FILE__ << "\n"; 

	// Display the compilation date 
	cout << "Compiled on " << __DATE__<<endl; 
	cout << "Time of compilation is" << __TIME__; 

	return 0; 
}
