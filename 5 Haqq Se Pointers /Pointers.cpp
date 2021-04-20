#include <iostream>
using namespace std;


int main() {
    int x = 10; // adx
    int y1 = 20; //ady1
    cout<< &x <<endl;  //adx 

    float y = 10.5; // ady
    cout<< &y <<endl;  //ady

    //It doesnt work for character variables
    char ch = 'A'; // adch
    

     //cout<<"Character"<<&ch<<endl; //'A'
    //Explicit Typecasing from char* to void*
    cout<<&ch<<endl;
    cout<<(void *)&ch <<endl;

    //Pointers

    int * xptr;  //addxptr
    //Store the address of a variable
    xptr = &x; //xptr = adx

    cout<< &x<<endl; //adx
    cout<< xptr <<endl; //adx

    //Re-assign another address to the variable
    xptr = &y1; // xptr = ady1
    cout<< &y1 <<endl; //ady1
    cout<<xptr<<endl; //ady1



return 0;
}
