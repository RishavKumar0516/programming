#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class Baseclass{
    public:
    int varbase;
    void display(){
        cout<<"Displaying base class variable varbase"<<varbase<<endl;
    }
};
 
 class Derivedclass : public Baseclass{
     public:
     int var_derived;
     void display(){
         cout<<"displaying derived class variabls var_derived"<<var_derived<<endl;
         cout<<"displaying base class variable varbase "<<varbase<<endl;
     }
 };
int main()
{
 Baseclass* base_class_pointer;
 Baseclass obj_base;
 Derivedclass obj_derived;
 base_class_pointer = &obj_derived;/* pointer of base class pointing to the function of derived class. */
 base_class_pointer->varbase = 34;
//  base_class_pointer->var_derived = 134; /*these will throw out error  */

  Derivedclass* derived_class_pointer;
  derived_class_pointer = &obj_derived;
  obj_derived.var_derived = 70;
  derived_class_pointer->var_derived;
  derived_class_pointer->display();
  cout<<obj_derived.varbase;



return 0;
}