#include <iostream>
using namespace std;

int main() {
	int a[2][4] = {3,6,9,12,15,18,21,24};
	cout<<*(a[1]+2) <<endl; 
	cout<<*(*(a+1)+2) <<endl; 
	cout<< 2[1[a]]<<endl; // Read it from inside
	return 0;
}