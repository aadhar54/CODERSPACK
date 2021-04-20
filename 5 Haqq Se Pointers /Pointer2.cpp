#include<iostream>
using namespace std;

int main(){
	
int x =10;
int *xptr = &x;

cout<<x <<endl;
cout<< xptr <<endl;
cout << *xptr <<endl;


int y = 20;
int *yptr = &y;

cout<< yptr <<endl;
xptr = yptr;
cout<<xptr<<endl;
cout<< *xptr <<endl;


return 0;	
}