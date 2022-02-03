#include<iostream>
using namespace std;
int global_var=96;//global variable.
float digit=3.456;
char str='y';
int main(){
    int var=33,global_var=45;/*declearing global variable and local 
  variable with same name*/
  float dec=342.45;
  char str2='r';
  cout<<"the value of local integer variable var is:"<<var<<endl;
  cout<<"the value of local integer variable global_var is:"<<global_var<<endl;
  cout<<"the value of global integer variable global_var is:"<<::global_var<<endl; //accessing global variable.
  cout<<"the value of local floating point variable dec is:"<<dec<<"\n";
  cout<<"the value of global floating point variable digit is:"<<::digit<<"\n";
  cout<<"the value of local character variable str2 is:"<<str2<<"\n";
  cout<<"the value of global char variable str is:"<<str<<endl;
  cin>>var;
  cin>>global_var;
  cin>>::global_var;
  cin>>dec;
  cin>>digit;
  cin>>str2;
  cin>>str;

}