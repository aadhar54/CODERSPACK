#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Batman{

	protected :
		int noOfHouses = 57;
		string moto ="It's not who you are underneath, it's what you do that defines you.";
		char vehicle[20] = "Bat-Mobile";
		char name[20] = "Bruce Wayne";
		char bloodGroup = 'A';
		bool hasFriends = false;
	private:
		int goldCoins = 100;


};


class SonOfBat : public Batman{

	private :
		char name[20] = "Damian Wayne";
		char bloodGroup = 'O';
		bool hasFriends = true;
	public :
		void printDetails(){
			cout<<"Son of batman's vehicle "<<vehicle<<endl;
			cout<<"Son of batman's name "<<name<<endl;
			cout<<"Son of batman's noOfHouses "<<noOfHouses<<endl;
			cout<<"Son of batman's moto "<<moto<<endl;
			cout<<"Son of batman's bloodGroup "<<bloodGroup<<endl;
			cout<<"Son of batman's hasFriends "<<hasFriends<<endl;
			//cout<<"Son of batman's  goldCoins"<<goldCoins<<endl;
		}
};


int main(){

	SonOfBat sob ;
	sob.printDetails();

	return 0;
}