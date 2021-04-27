//Multiple Inheritence 

#include<iostream>
using namespace std;

	class Human{

		protected :
			//int speedOfBrain = 200; gves error 
			char hasEmotions[10] ="Yes";
			char understandsSarcasm[10] = "Yes";
			char feelsPain[10] = "Yes";
			void speak()
			{
					cout<<"I am a human\n";
			}
	};

	class Robot {

		protected :
			// char hasEmotions[10] ="STFU";
			int speedOfBrain = 100;
			char canLie[20] = "never lies";
			char hasFriends[10] ="No";
			void speak()
			{
					cout<<"I am a robo\n";
			}
		};

	class Sheldon : public Human , public Robot{
		private :
			char hasFriends[10] ="Many";
		public:
			void speak()
			{
				cout<<"Bazingaaa I am a robo human\n";
			}
			void printDetails(){
				cout<<"Does Sheldon have emotions ? "<<hasEmotions<<endl;
				cout<<"Does Sheldon understand sarcasm ? "<<understandsSarcasm<<endl;
				cout<<"Does Sheldon feel pain ? "<<feelsPain<<endl;
				cout<<"What is speed of Sheldon's brain ? "<<speedOfBrain<<endl;
				cout<<"Does Sheldon lie ? "<<canLie<<endl;
				cout<<"Does Sheldon has any friends ? "<<hasFriends<<endl;
				//speak();
			}
	};
	int main(){

		Sheldon s ;
		s.printDetails();
		s.speak();

		return 0;
	}
