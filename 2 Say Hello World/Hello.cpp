#include<iostream>
using namespace std ;
void add (int a);

void add (int a ,int b);
int main(){
	
	int x = 1;

	add(4,0);
	
	return 0;
}

void add (int a){ 
	cout<<"Hello";
}

void add (int a ,int b){
	cout<<"Hi";
}