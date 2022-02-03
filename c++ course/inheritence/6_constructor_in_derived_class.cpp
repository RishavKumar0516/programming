#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printDataBase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 constructor is called"<<endl;
    }
    void printDataBase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

// class Derived : public Base1, public Base2{  // here first base1 constructor will called.
//      int derived1, derived2;
//      public:
//         Derived(int a, int b, int c, int d):Base1(a), Base2(b){
//             derived1 = c;
//             derived2 = d;
//             cout<<"derived class constructor is called!"<<endl;
//         }
//         void printDataDerived(void){
//             cout<<"The value of Derived1 is: "<<derived1<<endl;
//             cout<<"The value of Derived2 is: "<<derived2<<endl;
//         }
// };
 

class Derived :public Base1, virtual  public Base2{//here first base2 constructor will called.
     int derived1, derived2;
     public:
        Derived(int a, int b, int c, int d):Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"derived class constructor is called!"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of Derived1 is: "<<derived1<<endl;
            cout<<"The value of Derived2 is: "<<derived2<<endl;
        }
};
 
int main()
{
 Derived rishav(1,2,3,4);
 rishav.printDataBase1();
 rishav.printDataBase2();
 rishav.printDataDerived();
return 0;
}