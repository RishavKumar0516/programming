#include<iostream>
using namespace std;
 
/* global variable decleration here:- */


class complex{
    int a, b;

    public:
    friend complex sumComplex(complex , complex);
    void setNumber(int x, int y){
        a = x;
        b = y;
    }
    void printNumber(){
        cout<<"your number is "<<a<<"+"<<b<<endl;

    }

};

   complex sumComplex(complex O1, complex O2){
   complex O3;
   O3.setNumber((O1.a + O2.a),(O1.b + O2.b));
   return O3;
}
 
int main()
{
 complex o1,o2,sum;
 o1.setNumber(5,3);
 o1.printNumber();
 o2.setNumber(5,8);
 o2.printNumber();
 sum = sumComplex(o1, o2);
 sum.printNumber();

return 0;
}