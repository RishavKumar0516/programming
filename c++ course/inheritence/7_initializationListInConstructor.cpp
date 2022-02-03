#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class Test{
    int a; 
    int b;
    public:
    //   Test(int i, int j) : a(i), b(j)    //we can also write these as:
    //  Test(int i, int j) : a(i), b(i+j)     //we can also write these as:
    //   Test(int i, int j) : a(i), b(a+j)    //we can also write these as:
    //   {
    //       cout<<"constructor Executed"<<endl;
    //       cout<<"Value of a is "<<a<<endl;
    //       cout<<"value of b is "<<b<<endl;
    //   }                                  
      Test(int i, int j) : a(i)
      {   
          b = j;
          cout<<"constructor Executed"<<endl;
          cout<<"Value of a is "<<a<<endl;
          cout<<"value of b is "<<b<<endl;
      }
};
 
int main()
{
 Test t(4, 6);
return 0;
}