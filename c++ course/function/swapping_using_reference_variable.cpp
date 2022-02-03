#include<iostream>
using namespace std;
void swap_using_reference_variable(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"swaping is complete"<<endl;

}
int main(){
    int a=45,b=78;
    cout<<"before swaping the value of actual argument a is "<<a<<" and b is "<<b<<endl;
    swap_using_reference_variable(a,b);
    cout<<"after swaping the value of actual argument a is "<<a<<" and b is "<<b<<endl;
return 0;
}