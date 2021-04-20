#include <iostream>
using namespace std;


int main() {
    int x = 10; // adx
    cout<< &x <<endl;   //adx

    float y = 10.5; // ady
    cout<< &y <<endl;  //ady

    //It doesnt work for character variables
    char ch = 'A'; //adch
    //Explicit Typecasing from char* to void*
    cout<<&ch<<endl; // does not work so we use void *  // A
    cout<<(void *)&ch <<endl; // adch

return 0;
}