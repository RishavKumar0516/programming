#include<iostream>
void swap(int ,int );
int sum(int a,int b){
    return a+b;
}
using namespace std;
int main(){
    //passing value as argument to the function.
    int x,y;
    cout<<"please enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<"the sum of x and y is "<<sum(x,y)<<endl;

    //swaping the value using call by value.

    int a=45,b=89;
    cout<<"before swaping the value of variable a and b is: "<<a<<"  "<<b<<endl;
    swap(a,b);
    cout<<"after swaping the value actual argument a and b is as: "<<a<<"  "<<b<<endl;
    cout<<"swaping is not done by call by value.";


return 0;
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"the swaping process is completed"<<endl;
    cout<<"the value of formal argument a and b is: "<<a<<"  "<<b<<endl;
}