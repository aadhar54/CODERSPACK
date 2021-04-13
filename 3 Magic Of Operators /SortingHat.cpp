#include<iostream>
using namespace std ;

//prototype
void printResult(string house , string qual,string month, string name, string color);

int main(){

cout<<"Enter your name"<<endl;
string name;
getline(cin, name);  
cout<<endl;
cout<<endl;
// cout<<str;
cout<<"Please enter your favourite Colour "<<endl;
string color;
cin>>color;
cout<<endl;
cout<<endl;

cout<<"Please enter the month in you were born "<<endl;

string month;
cin>>month;
cout<<endl;
cout<<endl;
cout<<"Please answer honestly"<<endl;

cout<<endl;
cout<<endl;
cout<<"What do you value most \nEnter 1 for bravery\nEnter 2 for hardwork\nEnter 3 for dark magic\nEnter 4 creativity "<<endl;
cout<<endl;
cout<<endl; 
int choice;
cin>>choice;

cout<<endl;
cout<<endl; 

string house;
string qual;
switch(choice){
	case 1: 
	house="Gryffindor";
	qual="You value courage, bravery, nerve, and chivalry. Gryffindor's mascot is the lion.";
	break;
	case 2: 
	house="Hufflepuff";
	qual="Hufflepuff values hard work, patience, justice, and loyalty. The house mascot is the badger.";
	break;
	case 3: 
	house="Slytherin";
	qual="Slytherin values ambition, cunning, leadership, and resourcefulness.The house mascot is the serpant.";
	break;
	case 4: 
	house="Ravenclaw";
	qual="Ravenclaw values intelligence, creativity, learning, and wit.[HP5][HP7] The house mascot is an eagle.";
	break;

	default:
	house: "Death eater";
	qual: "You are not allowed inside Hogwarts.";

}

cout<<"Do you love magic?\nEnter Y or N "<<endl;
cout<<endl;
cout<<endl;
char ch ;
cin>>ch;

if(ch=='n'||ch=='N'){
	cout<<"You are expelled from Hogwarts"<<endl;
	cout<<endl;
	cout<<endl;
}
else{
	
	printResult(house,qual,month,name,color);
}


}
void printResult(string house , string qual,string month, string name, string color){
	cout << "\033[2J\033[1;1H"; //for clear screen
	cout<<"Dear "+name+" ,\nThe sorting hat has given a lot of thought and decided that a person born in the month of "+month+" with a fascination for "+color+" colour in all righteousness belongs to "+house+" .\n"+qual<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"With Best Regards";
	cout<<endl;
	cout << "\e[1mAlbus Percival Wulfric Brian Dumbledore\e[0m"<<endl;
	
	cout<<"(Headmaster,Hogwarts School of Witchcraft and Wizardry)"<<endl;
		cout<<endl;
	cout<<endl;
		cout<<endl;
	cout<<endl;
		cout<<endl;
	cout<<endl;
		

}
