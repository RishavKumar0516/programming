#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
class complex;
class calculator{
   public:
   int add(int a,int b){
       return a+b;
   }
   int sumrealcomplex(complex, complex);
};

class complex{
    int a,b;
    public:
    void setNumber(int x, int y){
        a = x;
        b = y;
    }
    void printNumber(){
        cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    friend int calculator::sumrealcomplex(complex, complex);
};

int calculator :: sumrealcomplex(complex c1, complex c2){
    return c1.a + c2.a;
}
 
int main()
{
     complex o1,o2;
     calculator c;
     int sum;
     o1.setNumber(2,4);
     o1.printNumber();
     o2.setNumber(4,6);
     o2.printNumber();
     sum = c.sumrealcomplex(o1, o2);
     cout<<"the sum of real part of o1 and o2 is "<<sum<<endl;
 
return 0;
}