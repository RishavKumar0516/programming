#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;/* b is a pointer vriable holding the address of the other data type */
    //&--address of operator .
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    cout<<"the value at the address b is "<<*b<<endl;

    /* pointers pointing to another pointer */

    int c=4;
    int* d=&c;
    int** e=&d;
    cout<<"the address of c is "<<&c<<endl;
    cout<<"the address of c is "<<d<<endl;
    cout<<"the value at the address in d is "<<*d<<endl;
    cout<<"the value at the address in e is "<<*e<<endl;
    cout<<"the value at the address value_at(c) is "<<**e<<endl;

    


return 0;
}