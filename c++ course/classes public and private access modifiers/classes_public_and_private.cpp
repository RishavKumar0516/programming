#include<iostream>
using namespace std;
 
/* global variable decleration here:- */


/* class are basic template used for creating objects. Inside class we declare variable and methods.
class contain information to create objects. */

class Employee{
    
    private:
       int a,b,c;

       /* private data is accessed by the function of class only. */

    public:
       int d,e;

       /* we have 2 option for defining function of class
       1. define the function directly inside the class, just as getData is defined.
       2. declare the function inside the class and define it outside the class using getData 
       */
       
       void setData(int a1,int b1,int c1);  /* declearing function inside class, these are public methods */

       void getData(){/* defining function inside the class, these are public methods. */
          cout<<"the value of a is "<<a<<endl;
          cout<<"the value of b is "<<b<<endl;
          cout<<"the value of c is "<<c<<endl;
          cout<<"the value of d is "<<d<<endl;
          cout<<"the value of e is "<<e<<endl;
       }
};

/* function of class defined outside the class is defined with the syntax :-

return type  className::(scope resolution operator) methods*/

void Employee::setData(int a1,int b1,int c1){
    a =a1;
    b = b1;
    c = c1;
}
 
int main()
{
 
 Employee rishav;  /*  rishav is object of class employee */

 rishav.d =34;/* d and e are public variable. it can be accessed using .operator. */
 rishav.e =35;

//  rishav.a = 25;/*it will throw out error because, a is a private variable. it cannot be accessed using dot(.) operator.it will be accessed by the methods of class. */
 
 rishav.setData(1,2,3);  /* calling and passing values from the main function. */
 rishav.getData();
return 0;
}