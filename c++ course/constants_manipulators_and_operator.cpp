#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n=345;
     int a=3456,b=345,c=987;
    cout<<"enter the different value of n: "<<endl;
    cin>>n;
    cout<<"the value of n is =changed "<<n<<endl;
    //using const const keyword .
    //with const you canoot change the value of variable..
    const int r=999;
    cout<<"the value of const int is"<<r<<endl;
    cout<<"the value of variable remain same "<<r; 
    //-----<------manipulators------->-----
   
cout<<"the value of a is :"<<a<<endl; 
cout<<"the value of b is :"<<b<<endl;
cout<<"the value of c is :"<<c<<endl;
cout<<"the value of a using setw() is :"<<setw(4)<<a<<endl; 
cout<<"the value of b using setw() is :"<<setw(4)<<b<<endl;
cout<<"the value of c using setw() is :"<<setw(4)<<c<<endl;
}
