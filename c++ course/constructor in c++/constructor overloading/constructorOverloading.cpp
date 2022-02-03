#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
  class complex{
     int a,b;
     public:
     complex(){
         a = 0;
         b = 0;
     }
     complex(int x, int y){
         a = x;
         b = y;
     }
     complex(int x){
         a = x;
         b = 0;
     }
     void print(){
      cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
     }
  };
int main()
{
complex c1(4,6);
c1.print();
complex c2;
c2.print();
complex c3(5);
c3.print();
 
return 0;
}