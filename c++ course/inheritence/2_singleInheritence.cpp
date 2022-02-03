#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

//  derived class from one base class.

//  these is for when visuality is public.
// class base{
//     int data1;
     
//      public:
//      int data2;
//      void setData();
//      int getData1(); 
//      int getData2();
// };

// void base::setData(){
//    data1 = 32;
//    data2 = 45;
// }

// int base::getData1(){
//     return data1;
// }

// int base::getData2(){
//     return data2;
// }

// class Derived:public base{
//     int data3;

//     public:

//     void process();
//     void display();
// };
// void Derived::process(){
//    data3 = data2*getData1();
// }
// void Derived::display(){
//    cout<<"the value of data1 is "<<getData1()<<endl;
//    cout<<"the value of data2 is"<<data2<<endl;
//    cout<<"the value of data3 is"<<data3<<endl;
// }
 
// int main()
// {
//  Derived der;
//  der.setData();
//  der.process();
//  der.display();
// return 0;
// }

//  these is for when visuality is private.
class base{
    int data1;
     
     public:
     int data2;
     void setData();
     int getData1(); 
     int getData2();
};

void base::setData(){
   data1 = 32;
   data2 = 45;
}

int base::getData1(){
    return data1;
}

int base::getData2(){
    return data2;
}

class Derived:private base{
    int data3;

    public:

    void process();
    void display();
};
void Derived::process(){
    setData();  //now set method is a private method so now we donot call/access them directly.
   data3 = data2*getData1();
}
void Derived::display(){
   cout<<"the value of data1 is "<<getData1()<<endl;
   cout<<"the value of data2 is"<<data2<<endl;
   cout<<"the value of data3 is"<<data3<<endl;
}
 
int main()
{
 Derived der;
 der.process();
 der.display();
return 0;
}