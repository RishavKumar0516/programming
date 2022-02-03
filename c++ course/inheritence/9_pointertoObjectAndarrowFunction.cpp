#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class Complex {
    int real, imaginary;
    public:
       void setData(int a, int b){
           real = a;
           imaginary = b;  
       }

       void getData(){
           cout<<"The Real part is "<<real<<endl;
           cout<<"the Imaginary part is "<<imaginary<<endl;
       }
};
 
int main()
{
   Complex c1;
   c1.setData(4, 6);
   c1.getData();

   /* let's see about the pointer pointing the class.*/
   Complex *p = &c1;
   /* lets dereference the pointer variable. */
   (*p).setData(1, 54);
   (*p).getData();

   /* we can also create object using new keyword. */
   Complex *ptr = new Complex;

   /* arrow operator:-  arrow operator dereference the pointer variable */
   ptr->setData(23, 25);
   ptr->getData();

   /* creating the arrays of pointers. */
   Complex *ptr2 = new Complex[4];
   ptr2->setData(55, 56);
   ptr2->getData();
return 0;
}