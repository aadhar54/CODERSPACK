#include <iostream> 
using namespace std; 

int main() { 
	int a = 10, b = 4, res; 

	res = a++; // a=10 
	//a=11
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	//res 10
	res = a--; // a=11
	// a = 10
	cout << "a is "<<a<<" and res is "<<res<< "\n"; //a is 10 and res is 11


	res = ++a; // a = 11 ,res = 11
	
	cout << "a is "<<a<<" and res is "<<res<< "\n";  
// a = 11 , res = 11
	
	res = --a; // a = 10 res = 10
	
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	return 0; 
} 
