#include<iostream>
using namespace std;
int addition(int ,int );
int subtraction(int ,int );
int product(int ,int );
int main(){
 int num1=45;
 int num2=32;
 cout<<"the sum of num1 "<<num1<<" and num2 "<<num2<<" is equals to "<<addition(num1,num2)<<endl;  
 cout<<"the sum of num1  and num2 is equals to "<<addition(34,78)<<endl;  
 cout<<"the sum of num1 and num2  is equals to "<<addition(121,2334)<<endl;  
 cout<<"the subtraction of num1 and num2  is equals to "<<subtraction(121,2334)<<endl;  
 cout<<"the product of num1 and num2  is equals to "<<product(121,2334)<<endl;  
return 0;
}
int addition(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}