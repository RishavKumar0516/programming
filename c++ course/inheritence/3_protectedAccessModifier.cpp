#include<iostream>
using namespace std;
 
/* global variable decleration here:- */


/* protected member :-   protected member is same as private member but it is inherited. */

class Base{      //  base class
    protected:
       int a;
       private:
       int b;
       public:
       void setval(){
           b = 28;
       }
       int getval1(){
           return a;
       }
       int getval2(){
           return b;
       }
};


/*       member              public mode                private mode           protected mode 

   1. private member        not inherited               not inherited          not inherited    
   2. protected member       protected                     private              protected      
   3. public mode             public                       private              protected
   */
//   protected member of base class becomes protected member of derived class.

class Derived:protected Base{
  public:
  void grab(){
      a = 34;
       setval();
  }
  void print(void){
      cout<<"the value of protected member a is "<<getval1()<<endl;
      cout<<"the value of protected member b is "<<getval2()<<endl;
  }
};

//  creating another derived class from base class whose visiblity mode is public.

class mean: public Base{
   public:

};
 
int main()
{
 Base b;
 Derived d;
 //cout<<b.a;//   a is a protected member of base class, so we cannot directly access them.we need methods of the same class to call/access them.
 d.grab();
 d.print();

// grabbing the mean class

mean my;
my.setval();
int k = my.getval1();
int l = my.getval2();
return 0;
}