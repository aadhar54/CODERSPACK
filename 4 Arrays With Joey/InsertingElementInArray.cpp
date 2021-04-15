#include<iostream>
using namespace std ;

int main(){
// Suppose we want to insert element 6
// at 2nd index ie 1 2 6 3 4 7 9 11


	 // initial array of size 100
	int arr[100] = {1,2,3,4,7,9,11};
	
	int n = 7;

	//index at which element is to be inserted
	int pos = 2;

	// element to be inserted 
	int x = 6;
	
	// shift elements forward
	for(int i = n-1 ;i>=pos;i--){
		arr[i+1] = arr[i];
	}

	// insert x at pos
	arr[pos] = x;
	 

	// print the updated array 
	for(int i=0;i<8;i++){
	cout<<arr[i]<<" ";
	}
}

//Remember if you calculate length using 
//sizeof(arr)/sizeof(arr[0]) , it will be 100
// but we have to print only till non zero elements 
//are present.

