#include<iostream>
using namespace std;

int main(){

	int a[100]; // defining array with 100 elements
	cout<<a[0]<<endl;
	//0 ........99 
	cout<<a[1]; //garbage value
	a[0]=5;
	cout<<a[1]<<endl; // 0 


	int b[5];
	for(int j=0;j<5;j++){  // runs 5 items 0 1 2 3 4
		// 0<5
		// 1<5
		// 2<5
		// 3<5
		// 4<5
		//loop runs five times
		cout<<"Enter "<<j<<" element"<<endl;
		cin>>b[j];  // User Input 
		cout<<b[j]<<endl;  // b[1]


	}

	return 0;
}