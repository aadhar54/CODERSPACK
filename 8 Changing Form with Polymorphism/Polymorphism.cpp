#include<iostream>
using namespace std;
 
class A                                  //  base class declaration.  
{  
       int a;  
       public:  
       void display()  
       {   
             cout<< "Class A ";  
        }  
};  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  
  {  
        cout<<"Class B"<<endl;  
  }  

  int print10(){
    cout<<10;
    return 0;
  }
};  

int main(){
  A a; //

  B b;
  a.display(); // Class A
  b.display(); // Class B
  //a.print10();
  return 0;
}