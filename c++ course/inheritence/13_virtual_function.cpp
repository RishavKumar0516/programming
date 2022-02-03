#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

/* virtual function */
class base{
    public:
     int data;
     base(){}
     base(int k){
         data = k;
     }
     virtual void display(){
         cout<<"the amount of money you mant to deposite is: "<<data<<endl;
     }
     virtual void display2(){
         cout<<"the amount of money you mant to deposite is: "<<data<<endl;
     }
};

class derived : public base{
    public:
       int data2;
       derived(int a, int b) : base(a){
           data2 = b;
       }
       void display(){
           cout<<"the amount of money you mant to deposite is: "<<data<<endl;
           cout<<"the amount of money you want to deposite again is: "<<data2<<endl;
       }
       
};

/* the name of function inside derived class would be same as the function of base class, if not then these will give you error.  */
 
int main()
{
  base objbase;
  derived objderived(4,8);
  base* basepointer;
  derived* pointer;

  basepointer = &objderived;
  basepointer->display();
  basepointer->display2();

return 0;
}