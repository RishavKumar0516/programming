#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class A{
    int a;
    public:
       void setData(int a){
           this->a = a;
       }
       void getData(){
           cout<<"the value of a is "<<a<<endl;
       }
};
 
int main()
{
      A *p;
      p->setData(4);
      p->getData();
return 0;
}