#include<iostream>
using namespace std;

int main(){
    // const int  x= 5;
    // x++;
    // cout<<x<<endl;


//CONST WITH POINTERS

const int *a= new int(2 ); //const data , no const pointer
// *a=2;
cout<<*a<<endl;
int b= 20;
a= &b;
cout<<*a<<endl;




    return 0;

}