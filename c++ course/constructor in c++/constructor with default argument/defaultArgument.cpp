#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class simple{
    int data1,data2;
    public:

    simple(int a, int b = 9){
        data1 = a;
        data2 = b;
    }
    void printData();
};

void simple::printData(){
    cout<<"the value of data is "<<data1<<" and "<<data2<<endl;
}
 
int main()
{
 simple s(1,4);//if value is passed as the argument then the value is gonna set to the attributes.
 s.printData();

 simple p(1);//if value is not passed then by default it is setted.
 p.printData();
return 0;
}