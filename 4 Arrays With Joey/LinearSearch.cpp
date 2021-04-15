#include<iostream>
using namespace std;

//Program to read 10 numbers and reverse them.

int main(){

	int a[10];
	int key;


	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	
	cout<<"Enter an element to search"<<endl;
	cin>>key;

	int ans=-1;
	for(int i=0;i<10;i++){
		if(a[i]==key){
			ans = i;
			break;
		}
	}
	if(ans==-1){
		cout<<"Element Not found !";
	}
	else{
		cout<<"Ans :"<<ans<<endl;
	}

	return 0;
}