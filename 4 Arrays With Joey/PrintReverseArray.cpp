#include<iostream>
using namespace std;

//Program to read 10 numbers and reverse them.

int main(){

	int a[10];

	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	

	for(int i=9;i>=0;i--){
		cout<<a[i]<<endl;
	}

	return 0;
}