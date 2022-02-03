#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 class complex{
     int a,b;
     public:

     /* creating a constructor */
     
     complex(void);//constructor decleration.

     void printf(void){
         cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
     }
 };

 /* constructor decleration */
 complex::complex(void){//  default constructor.
     a = 10;
     b = 0;
 }


int main()
{
 complex c;
 c.printf();
 complex m;
 m.printf();
return 0;
}