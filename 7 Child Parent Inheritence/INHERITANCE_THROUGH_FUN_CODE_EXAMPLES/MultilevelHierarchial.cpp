//Multilevel and Hierarchial Inheritence

/*
					Anant
					/
Human --> DA ---> MA
					\
					Isha 



*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std ;

class Human{
protected:
	int noOfHands = 2;
	int noOfLegs = 2;
	int noOfEyes = 2;
	int noOfEars = 2;
	string hair;
	int age=0;
public :
	void print(){
		cout<<age<<endl;
	}
	void setAge(int a){ // setter 
			age = a;
	}

};

class SirDirubai : public Human{
	protected:
		char money[10] = "Billions";
		string contribution = "Extreme";
};

class MukeshA : public SirDirubai{
	protected:
		char iplTeam[20]="Mumbai Indians";
		int numberOfCars = 500;
		int numberOfJets = 200;
		int noOfhair = 10;
	
};

class Anant : public MukeshA{
	private :
		string college = "Down University";
		//int noOfhair = 1000;

};

class Isha : public MukeshA{
	private :
		string college = "Yale University";
		

};




int main(){
	
	Anant a ;
	a.setAge(100);
	a.print();
	cout<<endl;
	//cout<<a.noOfhair<<endl; 
	// gives error  WHY HW ???

	return 0;
}

