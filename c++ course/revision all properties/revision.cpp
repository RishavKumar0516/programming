#include<iostream>
using namespace std;

/* global variable */
int glo=45,c=49;

int main()
{
 
 int a=10,b=11,c=12;     //local variable
 cout<<a<<"\n"<<b<<"\n"<<c<<endl; // printing local variable.

 cout<<glo<<endl;//printing global variable.
 /* if local and global variable have same name then we should acces the global variable inside the function using resolution operator(::) */
 cout<<::c<<endl;

//  int m,n;
//  cin>>m>>n;/* taking input from the user. */
//  cout<<"the value of m is "<<m<<" the value of n is "<<n<<endl;

/* pre-increment and pre-decrement operator */

  a= 34,b=44;
  cout<<"the value of a is "<<a<<endl;
  cout<<"the value of --a is "<<--a<<endl;
  cout<<"the value of b is "<<b<<endl;
  cout<<"the value of ++b is "<<++b<<endl;

/* post-increment and post-decrement */
cout<<"the value of a is "<<a<<endl;
cout<<"the value of a++ is "<<a++<<endl;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of b-- is "<<b--<<endl;
cout<<"the value of b is "<<b<<endl;

/* reference variable */

float x=455;
float &y=x;/* y is the reference variable of x */
cout<<"the value of x is "<<x<<endl;
cout<<"the value of y is "<<y<<endl;

/* typecasting */

int k=45;
float l = 45.6;
cout<<"the value of k is "<<k<<endl;
cout<<"the value of k after typecasting to float is "<<(float)k<<endl;

cout<<"the value of l is "<<l<<endl;
cout<<"the value of k after typecasting to int is "<<int(l)<<endl;

return 0;

}
