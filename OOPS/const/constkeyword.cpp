#include<iostream>
using namespace std;

int main(){
    // const int  x= 5;
    // x++;
    // cout<<x<<endl;


//CONST WITH POINTERS

// const int *a= new int(2 ); //const data , no const pointer
// int const *a = new int(2); // same as the above line
// *a=2; cant change the content of the pointer 
// cout<<*a<<endl;
// int b= 20;
// a= &b; //* but the pointer it self can be reassigned 
// cout<<*a<<endl;



//CONSTANT POINTER BUT NON CONSTANT DATA
//  int *const  a= new int(2);
//  cout<<*a<<endl;
//  *a=20; // chal jayega
//  cout<<*a<<endl;
//  int b= 20;
//  a=&b; //nahi chalega




//const pointer , const data

const int *const a= new int (2);
cout<<*a<<endl;
*a = 50;
int b=100;
a= &b;





return 0;

}