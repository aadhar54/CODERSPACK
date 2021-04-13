#include<iostream>
using namespace std;

/*
main is a main where compilation starts .
This is a program to print Hello Bharbutiji.
*/

//Print Steps to make bread butter

int printSteps(int x,int y){
	int sum = x+y;
	cout<<"First take a bread\n";
	cout<<"Second take butter\n";
	cout<<"Eat bread first\n";
	cout<<"Eat spoonful of butter\n";
	cout<<"Mix in tummy\n\n";
	return sum;
}

int main(){

	int summation = printSteps(4,5);
	// printSteps();
	// printSteps();
	// printSteps();
	cout<<"Sum of x and y is "<<summation<<endl;

	return 0;
}

