#include<iostream>
using namespace std ;

class Vehicle{
	
	protected :
		int noOfWheels = 4;
		int gears = 7;
		//char color[10] = "green";


};
class Car{
	protected :
		char color[10] ="red";

};
class Audi : public Vehicle , public Car{
	// private :
	// 	string color = "blue";

	public :
		void print(){
			cout<<noOfWheels<<endl;
			cout<<gears<<endl;
			cout<<color<<endl;
		}

};

int main(){
	
	Audi a;
	a.print();

	return 0;
}




