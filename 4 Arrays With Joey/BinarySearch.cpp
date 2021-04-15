#include<iostream>
using namespace std;

int binarySearch(int *a,int n,int key)
{
int start = 0;
int end = n -1;
int mid;
	while(start <= end) {
		mid = (start + end)/2;
		
		if( key == a[mid] ) {
			return mid;
		}
		else if(key > a[mid]){
			start = mid + 1;
		}
		else{
			end = mid  - 1;
		}

	}
return -1;
}


int main(){
	int n,key;
	int a[100];
	cout<<"Enter size of array "<<endl;
	cin>>n;

	cout<<"Enter the array elements "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter the element to Search ";
	cin>>key;
	
	int ans = binarySearch(a,n,key);
	if(ans != -1){
		cout<<"Element found at "<<ans<<endl;
	}
	else{
		cout<<"Element not found "<<endl;
	}
	return 0;
}