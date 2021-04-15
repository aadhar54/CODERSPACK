#include<iostream>
using namespace std;



int main(){


	int arr[4] ={1,2,3,4};
	
	int b[4] ;
	//Copy elements of arr to b 
	for(int i=0;i<4;i++){
			b[i] = arr[i];
			cout<<b[i]<<endl;
	}



	return 0;
}