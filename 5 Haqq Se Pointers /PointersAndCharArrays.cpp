#include<iostream>
using namespace std ;

int main(){

char arr[] = { 'w','a','t','e','r','\0'};

cout<<(void*)arr<<endl;

cout<<(void*)(arr+1)<<endl;

return 0;

}