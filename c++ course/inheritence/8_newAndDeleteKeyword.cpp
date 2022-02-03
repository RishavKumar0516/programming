#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int a = 4;
 int *p = &a;
 cout<<"the value of variable a is "<<a<<endl;
 cout<<"The value stored in pointer variable p is "<<p<<endl;
 cout<<"The value of the pointer variable p is "<<*p<<endl;

/* new keyword  */
 int* k = new int(40);//creating the variable using new keyword.
 cout<<"the value stored in k is "<<k<<endl;
 cout<<"the value at address k is "<<*k<<endl;

 /* creating the array using new keyword. */
 int* arr = new int [5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    /* delete operator */
    delete p;
    cout<<"the allocated space for p is freed"<<endl;
    delete arr;
    cout<<"the allocated space for arr is freed"<<endl;
 return 0;
}