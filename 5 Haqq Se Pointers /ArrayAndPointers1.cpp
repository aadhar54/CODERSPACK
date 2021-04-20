#include<iostream>
using namespace std;


int main(){
		
	int arr[5]={5,6};

	cout<<sizeof(arr)<<endl;

	cout<<arr<<endl;

	cout<<&arr[0]<<endl;

	int *ptr = arr;

	cout<<ptr<<endl;

	cout<< *(arr+1) <<endl;

	

	return 0;
}