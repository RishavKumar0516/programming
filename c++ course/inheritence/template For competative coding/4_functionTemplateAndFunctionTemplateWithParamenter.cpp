#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

//we don't need to create the function individually for different datatype. we use the template for creating function and then use them later for different different datatype.

template<class t1, class t2>
float funcAverage(t1 a, t2 b){  // these template is used to find the average of 2 number.
    t1 avg = (a+b)/2;
    return avg;
}
 
 template<class t>
 void swapp(t &a, t &b){
     t temp = a;
     a = b;
     b = temp;
 }
int main()
{
 int a;
 a = funcAverage(5, 2);//creating function whose paramenter are integer.
 cout<<a<<endl;
 float b;
 b = funcAverage(5.8, 2.9);//creating function whose paramenter are float.
 cout<<b<<endl;

 int m = 34, n = 45;
 cout<<"Before swapping the m is "<<m<<" and n is "<<n<<endl;
 swapp(m, n);//creating function whose paramenter are integer.
 cout<<"after swapping the m is "<<m<<" and n is "<<n<<endl;

  float p = 34.56, q = 45.48;
 cout<<"Before swapping the p is "<<p<<" and q is "<<q<<endl;
 swapp(p, q);//creating function whose paramenter are float.
 cout<<"after swapping the p is "<<p<<" and q is "<<q<<endl;
return 0;
}