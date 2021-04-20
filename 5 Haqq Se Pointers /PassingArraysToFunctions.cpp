#include<iostream>
using namespace std ;

int increase(int arr[] , int l){
	for(int i=0;i<l ;i++){
		arr[i]=arr[i]+1;
	}
	return 0;
}


int main(){
	int arr [] = {4,2,5,1};
	int length = sizeof(arr)/sizeof(arr[0]);
	increase(arr, length);
	for(int i=0;i<length ;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}