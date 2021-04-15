#include<iostream>
using namespace std ;
void feedJoey(int noOfPizzaSlices , string arr[],int n);
int main(){
	
	cout<<"Hello ! I am Joey ";
	cout<<"What is your name buddy"<<endl;
	string name;
	cin>>name;

	cout<<"Please enter number of Pizza slices out of 10 you would like to feed me "<<name<<endl;
	int slices ;
	cin>>slices;
	cout<<endl;
	string joeySays[]={"Joey: WHY GOD WHY \nI will telll Pheobe that you gave me zero slices!!!\n","How you doin?\n","I love you but less than pizza\n","Can I be wearing any more clothes\n"};
	int n = sizeof(joeySays)/sizeof(joeySays[0]);
	feedJoey(slices,joeySays,n);


	return 0;
}
void feedJoey(int noOfPizzaSlices , string arr[],int n){
	if(noOfPizzaSlices==0){
	cout<<arr[0]<<endl;
	}
	else if(noOfPizzaSlices>0 && noOfPizzaSlices<10){
	cout<<arr[1]<<endl;
	}
	else if(noOfPizzaSlices>=10){
	cout<<arr[2]<<endl;
	}
	else{
		cout<<arr[3]<<endl;
	}

}