#include<iostream>
using namespace std;

int main(){
  //------>referencing variable...  
  float x=3.4;
  int y=324;
  char str='r';
  float &a=x;//referencing x by y.
  int &b=y;
  char &str2=str;
  cout<<"the value of x is:"<<x<<endl;
  cout<<"the value of a is:"<<a<<endl;
  cout<<"the value of y is:"<<y<<endl;
  cout<<"the value of b is:"<<b<<endl;
  cout<<"the value of str is:"<<str<<endl;
  cout<<"the value of str2 is:"<<str2<<endl;
return 0;                                           