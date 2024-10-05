//OBJECT CREATION

#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;


    //CONSTRUCTOR
    Animal(){
        this->age=0;
        this->name="";

        cout<<"Constructor called"<<endl;

    }
    //behaviour

    void bark(){
        cout<<"barking"<<endl;
    }
    void eat(){
        cout<<"eating"<<endl;
    } 



};


int main(){
    Animal * Suresh = new Animal;
    cout<<Suresh->age;
    cout<<Suresh->name;

    return 0;
    
}