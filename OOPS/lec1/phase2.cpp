//OBJECT CREATION

#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;


    //CONSTRUCTOR
    Animal(){
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


    return 0;
    
}