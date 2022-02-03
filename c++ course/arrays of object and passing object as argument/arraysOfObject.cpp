#include<iostream>
using namespace std;


class Employee{
    char name[10];
    int id;
    int salary;

    public:
    void setData(void){
        cout<<"Enter the name of employee "<<endl;
        cin>>name;
        cout<<"Enter the Id of employee "<<endl;
        cin>>id;
        cout<<"Enter the salary of employee "<<endl;
        cin>>salary;
    }
    void getData(void){
        cout<<"The name of the employee is "<<name<<endl;
        cout<<"The Id of the employee is "<<id<<endl;
        cout<<"The salary of the employee is "<<salary<<endl;
    }
};


class complex{
    int a;
    int b;

    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(){
        cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
 
/* global variable decleration here:- */
 
int main()
{
//  Employee harry,mohan,sohan,devdas;
//  harry.setData();
//  harry.getData();

//  devdas.setData();
//  devdas.getData();

 //arrays of object.
//  int n;
//   cin>>n;
//  Employee fb[n];
//  for(int i=0;i<n;i++){

//      fb[i].getData();
//      fb[i].setData();

//  }

/* passing objects as argument */

complex c1,c2,c3;
c1.setData(1,2);
c1.printNumber();


c2.setData(4,5);
c2.printNumber();


c2.setDataBySum(c1,c2);
c2.printNumber();

return 0;
}