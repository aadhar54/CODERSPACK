#include <iostream>    
using namespace std;    

class Animal {    
    public:    
void eat()
   {  
	cout<<"Eating...";      
   }        
};    

class Dog: public Animal      
{     
public:    
 void eat()      
    {           
    	cout<<"Eating bread...";      
    }  
};  

int main(void) { 

// int num = 5;
    // Dog d = Dog(); 
  Animal d = Dog();

   // Dog()  ---> Creating an object of Dog class

   // Dog d  ----> storing object created of Dog class in d .



   d.eat(); 
   cout<<endl;   
   return 0;    
}    