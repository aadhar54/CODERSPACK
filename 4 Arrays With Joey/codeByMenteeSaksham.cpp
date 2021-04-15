#include<iostream>
using namespace std;

void printresult (char letter , char ch , string name, int DOB, int MOB);
int main()
{
	cout<<"Hello, welcome to my world....\n Get ready to Know your Future :) \n Fill up some details & I will tell Your Future ;> "<<endl<<endl;
	cout<<"Enter your name"<<endl;
	string name;
	cin>>name;
	cout<<endl;
cout<<"Enter Your DOB\nI will tell about your Personality "<<endl;
int DOB ;
cin>>DOB;
cout<<endl<<"Thank you "+name+" \n";
switch (DOB)
{
	case 1:
		cout<<"Your DOB says you are\nBold and rude";
		break;
	case 2:
		cout<<"Your DOB says you are\nlucky and loyal";
		break;
	case 3:
		cout<<"Your DOB says you are\nnaughty and genuine";
		break;
	case 4:
		cout<<"Your DOB says you are\ncaring and strong";
		break;
	case 5:
		cout<<"Your DOB says you are\nloving and pracical";
		break;
	case 6:
		cout<<"Your DOB says you are\nromantic and curious";
		break;
	case 7:
		cout<<"Your DOB says you are\nadventurous and honest";
		break;
	case 8:
		cout<<"Your DOB says you are\nactive and hard working";
		break;	
	case 9:
		cout<<"Your DOB says you are\nsensitive and pretty";
		break;	
	case 10:
		cout<<"Your DOB says you are\nstylish and friendly";
		break;
	case 11:
		cout<<"Your DOB says you are\ntalented and creative";
		break;
	case 12:
		cout<<"Your DOB says you are\nconfident and freedom";
		break;
    case 13:
		cout<<"Your DOB says you are\nambitious and very hard working";
		break;
	case 14:
		cout<<"Your DOB says you are\nyou are born to rule only";
		break;
	case 15:
		cout<<"Your DOB says you are\ncutest and talktive";
		break;
	case 16:
		cout<<"Your DOB says you are\nfriendly and helping";
		break;
	case 17:
		cout<<"Your DOB says you are\ncaring and kind ";
		break;
	case 18:
		cout<<"Your DOB says you are\nkind hearted and encouraging";
		break;
	case 19:
		cout<<"Your DOB says you are\nbubbly and social";
		break;
	case 20:
		cout<<"Your DOB says you are\nroyal and forgiving";
		break;	
	case 21:
		cout<<"Your DOB says you are\nhonest and thrustworthy";
		break;	
	case 22:
		cout<<"Your DOB says you are\ncharming and attractive";
		break;
	case 23:
		cout<<"Your DOB says you are\nfunniest and sexiest";
		break;
	case 24:
		cout<<"Your DOB says you are\nbeauty with brains";
		break;
	case 25:
		cout<<"Your DOB says you are\nfoody and inocent";
		break;
	case 26:
		cout<<"Your DOB says you are\ncoool and silent killer";
		break;
	case 27:
		cout<<"Your DOB says you are\nemotional and sharp minded";
		break;	
	case 28:
		cout<<"Your DOB says you are\ncalm and knowledgebale";
		break;	
	case 29:
		cout<<"Your DOB says you are\nunderstanding and motivated";
		break;
	case 30:
		cout<<"Your DOB says you are\ninsecure and passinate";
		break;
	case 31:
		cout<<"Your DOB says you are\nfaithfull and awesome personality";
		break;
    default:
	cout<<"miracle!!! miracle!!! you are born on"<<"DOB" <<":D";
	
}

cout<<endl;

cout<<endl;
cout<<"So do you believe in Me?? y or n "<<endl;
	char ch;
	cin>>ch;
	
	if(ch=='n'||ch=='N')
{
	cout<<"Then sorry "+name+" I can't tell your future"<<endl;
	cout<<endl;
	cout<<endl;
}
else
{
	cout<<endl<<"Pay me then we can continue :)\n   Haha Just Kidding";
	cout<<endl;
	cout<<endl;
	cout<<"Enter Your MOB(month of birth)"<<endl<<"I will tell your Future"<<endl;
int MOB ;
cin>>MOB;
cout<<endl<<"Thank you "+name+" \n";
switch (MOB)
{
	case 1:
		cout<<"Jan: you are going to be a billionaire";
		break;
	case 2:
		cout<<"Feb: you are going to top your university ";
		break;
	case 3:
		cout<<"Mar: after may you will be the mentee for C++";
		break;
	case 4:
		cout<<"April: you are going to make zoom call alternative ";
		break;
	case 5:
		cout<<"May: you will get LOR from mycaptain";
		break;
	case 6:
		cout<<"june: you will buy 5 house";
		break;
	case 7:
		cout<<"july: stay alert!! your bestfriend will cheat you";
		break;
	case 8:
		cout<<"Aug: lockdown will extend in your area ";
		break;	
	case 9:
		cout<<"sept: you will motivate thousands of people";
		break;	
	case 10:
		cout<<"Oct: you are god gifted, no one can harm you";
		break;
	case 11:
		cout<<"nov: you will buy a BMW";
		break;
	case 12:
		cout<<"Dec: you are very close to your dreams";
		break;
    default:
		cout<<"I think there are only 12 Months in a year";
}
}
return 0;
}