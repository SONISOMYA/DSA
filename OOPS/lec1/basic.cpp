#include<iostream>
using namespace std;

class Animal{
    //properties or states
    public:
    int age;
    string name;

    //behaviour

    void bark(){
        cout<<"barking"<<endl;
    }
    void eat(){
        cout<<"eating"<<endl;
    } 
};

int main(){
    //object creation 

//static
Animal Ramesh;
int x=Ramesh.age=2;
cout<<x<<endl;
Ramesh.bark();
Ramesh.eat();


//dynamiv
}