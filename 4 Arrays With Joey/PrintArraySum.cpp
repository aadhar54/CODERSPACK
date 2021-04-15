#include<iostream>
using namespace std;


int findSum(int arr[],int n){

int sum=0;
for(int i=0;i<n;i++){
	sum = sum + arr[i];
	arr[i] = -arr[i];
}

return sum;
}



int main(){

int a[100];

int n;
cin>>n;

for(int i=0;i<n;i++){
	cin>>a[i];
}

int ans =findSum(a,n);
cout<<ans<<endl;

for(int i=0;i<n;i++){
	cout<<a[i];
}


return 0;

}