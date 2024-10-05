#include<iostream>
using namespace std;

class Animal{
    //properties or states

    private:
    int weight;
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
    //to access privae members outside class we use getter and setter
    int getWeight(){
        return weight;
    }

    void setWeight(int w){

        weight= w;
    }
};

int main(){
    //object creation 

//static
Animal Ramesh;
// int x=Ramesh.age=2;
// cout<<x<<endl;
// Ramesh.bark();
// Ramesh.eat();
// Ramesh.setWeight(100);

// cout<<"weight of Ramesh is : "<<Ramesh.getWeight();


//dynamically

Animal* Suresh = new Animal;
Suresh->age=20;
cout<<"age of suresh is:"<<Suresh->age;


}