#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age; 
    if(age<18){
    cout<<"you are very small for the party"<<endl;}
     else if(18<age<20){
    cout<<"you can get the pass "<<endl;
    }
    else if(age==18){
    cout<<"you can get the child pass,but please pay the entry fee"<<endl;
    }
    else{
    cout<<"you are suitable for the party and, don't need any passs"<<endl;
    }
return 0;
}