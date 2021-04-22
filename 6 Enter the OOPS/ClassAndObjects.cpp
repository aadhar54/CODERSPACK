#include <iostream>
using namespace std;

class Car{

public:
    int price;
    int model_no;
    char name[20];

    void start(){
        cout<<"Grrrr...starting the car "<<name<<endl;
    }
    
};

int main() {
    //static int a;
    //int a;
    Car C;
    Car C1;

    cout<<C.price<<endl; //zero
     cout<<C1.price<<endl;
    //Initialisation
    C.price =500; 
    cout<<C.price<<endl; // 500
    C.model_no = 1001;
    C.name[0] = 'B';
    C.name[1] = 'M';
    C.name[2] = 'W';
    C.name[3] = '\0';




    // C.name[4] = 'K';
    cout<<C.name<<endl;
    cout<<C1.name<<endl;
    C.start();
    //cout<<sizeof(C)<<endl; // C is an actual object 28 bytes
    //cout<<sizeof(Car)<<endl; // It will take 28 bytes
    //Car C[100]; //Array an objects
    


    return 0; 
}