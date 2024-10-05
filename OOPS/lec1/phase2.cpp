//OBJECT CREATION

#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;


    // DEFAULT CONSTRUCTOR
    Animal(){
        this->age=0;
        this->name="";

        cout<<"Constructor called"<<endl;

    }

    //PARAMETERIZED CONSTRUCTOR
    Animal(int age){
        this->age= age;
        cout<<"parametrized constructor called";
    }


     //copy constructor
     Animal(Animal &obj){
        this->age= obj.age;
        this->name = obj.name;
        cout<<"I am inside Copy Constructor"<<endl;
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
    Animal * Suresh = new Animal(100);
    Animal a(10);
    
   //Object copy

   Animal b= a;



    return 0;
    
}