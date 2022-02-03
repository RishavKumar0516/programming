#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 class base1{
     public:
     void greet(){
         cout<<"How are you"<<endl;
     }
 };
 class base2{
     public:
     void greet(){
         cout<<"You are looking Awesome, "<<endl;
     }
 };
 class base3{
     public:
     void greet(){
         cout<<"are you free, we shall hang up together. "<<endl;
     }
 };
class Derived : public base1, public base2{
     int a;
     public:
     void greet(){
         base1::greet();
     }
};

  
int main()
{
 base1 obj;
 obj.greet();
 base2 obj1;
 obj1.greet();
 base3 obj2;
 obj2.greet();
 Derived der;
 der.greet();
return 0;
}