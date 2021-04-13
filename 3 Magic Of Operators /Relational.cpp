// C++ program to demonstrate working of logical operators 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 10, b = 4; 

	// greater than example 
	if (a > b) 
		cout << "a is greater than b\n"; 
	else
		cout << "a is less than or equal to b\n"; 

	// greater than equal to 
	if (a >= b) 
		cout << "a is greater than or equal to b\n"; 
	else
		cout << "a is lesser than b\n"; 

	// less than example 
	if (a < b) 
		cout << "a is less than b\n"; 
	else
		cout << "a is greater than or equal to b\n"; 

	// lesser than equal to 
	if (a <= b) 
		cout << "a is lesser than or equal to b\n"; 
	else
		cout << "a is greater than b\n"; 

	// equal to 
	if (a == b) 
		cout << "a is equal to b\n"; 
	else
		cout << "a and b are not equal\n"; 

	// not equal to 
	if (a != b) 
		cout << "a is not equal to b\n"; 
	else
		cout << "a is equal b\n"; 

	return 0; 
} 
