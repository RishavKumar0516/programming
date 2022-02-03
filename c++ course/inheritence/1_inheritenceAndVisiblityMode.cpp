#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

 class Employee{  //base class
    public:
    int id;
    float salary;

    Employee(){}//default constructor.
    Employee(int inpid){//parameterised constructor
        id = inpid;
        salary = 34;
    }
    void changeSalary(int sal){
        salary = sal;
    }
};

//   creating a derived class programmer from Employee(base class).
//   private visibility mode:  public member of the base class becomes private member of the derived class.
//   public visibility mode:  public member of the base class becomes public member of the derived class.
//   private member of the base class will never become the member of derived class. private memeber are never inherited.


class programmer : Employee{   //derived class
    public:
    int languagecode = 9;
    programmer(int inpid){
        id = inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};



int main()
{
 Employee harry(1),rohan(2);
 cout<<harry.salary<<endl;
 cout<<rohan.salary<<endl;
 programmer skillf(1);
 skillf.getdata();
 //skillf.changeSalary(45);   //changeSalary method is the public method of base class, but when gets inherited(visiblity mode is private) becomes the private method of derived class.so we do not access them using dot(.).for access them we need public methods of derived class.
 //cout<<skillf.id<<endl;  //id is the public member of base class, but when gets inherited(visiblity mode is private) becomes the private member of derived class.so we do not access them using dot(.). 
return 0;
}
