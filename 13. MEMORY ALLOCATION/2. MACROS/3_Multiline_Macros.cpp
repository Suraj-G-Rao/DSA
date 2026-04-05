// C++ program to illustrate the multiline macros 
#include <iostream> 
using namespace std;

// Define a macro for printing a rectangle with a given 
// width and height 
#define PRINT_RECTANGLE(width, height)					 \ 
	for (int i = 0; i < height; i++) {					 \ 
		for (int j = 0; j < width; j++) {				 \ 
			cout << "*";							     \ 
		}												 \ 
		cout << endl;					            	 \ 
	} 

int main() 
{ 

	// Print a rectangle with a width of 4 and a height of 3 
	PRINT_RECTANGLE(4, 3); 
	return 0; 
}
