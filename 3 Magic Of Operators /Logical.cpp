// C++ program to demonstrate working of 
// logical operators 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 10, b = 4, c = 10, d = 20; 

	// logical operators 

	// logical AND example 
	if (a > b && c == d) 
		cout << "a is greater than b AND c is equal to d\n"; 
	else
		cout << "AND condition not satisfied\n"; 

	// logical OR example 
	if (a > b || c == d) 
		cout << "a is greater than b OR c is equal to d\n"; 
	else
		cout << "Neither a is greater than b nor c is equal "
				" to d\n"; 

	// logical NOT example 
	if (!a)   // if num is 0 , so !0 will be true else 
			//if num is not zero , then !num will be false
		cout << "a is zero\n"; 
	else
		cout << "a is not zero\n"; 

	return 0; 
} 
