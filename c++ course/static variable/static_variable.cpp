#include<iostream>
using namespace std;
int static_variable(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main(){
 int a,b;
 cout<<"please enter the value of a and b"<<endl;
 cin>>a>>b;
 for(int i=0;i<5;i++){
     int k=static_variable(a,b);
cout<<"the evaluation of the expression is "<<k;
a++;
b++;

 }   
return 0;
}