// C++ program for function overloading 
#include<iostream> 

using namespace std; 

class Sample 
{ 
	public: 
	
	// function with 1 int parameter 
	// void func(int y) 
	// { 
	// 	cout << "value of x is " << y << endl; 
	// } 
	//actually compiler will not able to decide which func function to use
	//because the parameter data type was same for both of the func
	// ~ Prathmesh
	void func(int x) 
	{ 
		cout << "value of x is " << x << endl; 
	} 
	
	// function with same name but 1 double parameter 
	void func(double x) 
	{ 
		cout << "value of x is " << x << endl; 
	} 
	
	// function with same name and 2 int parameters 
	void func(int x, int y) 
	{ 
		cout << "value of x and y is " << x << ", " << y << endl; 
	} 

	void func(){
		cout<< "I am parameter less ; )";
	}
}; 

int main() { 
	
	Sample obj1; 
	// int x;
	// cin>> x; 

	//check data type and call function accordingly HW

	// Which function is called will depend on the parameters passed 
	// The first 'func' is called 
	obj1.func(7); 
	
	// The second 'func' is called 
	obj1.func(9.132); 
	
	// The third 'func' is called 
	obj1.func(85,64); 

	obj1.func();
	return 0; 
} 
