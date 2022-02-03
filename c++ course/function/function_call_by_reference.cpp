#include<iostream>
using namespace std;
void call_by_reference(int* a,int* b){
    
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"the swapping process is complete"<<endl;
    cout<<"after swaping the value of formal argument a and b is as:  "<<*a<<"  "<<*b<<endl;

}
int main(){
    /*swaping by call by reference*/
    int a=23,b=85;
    cout<<"before swaping the actual argument the value of a is "<<a <<"and b is  "<<b<<endl;
    call_by_reference(&a,&b);
   cout<<"after swaping the actual argument the value of a is "<<a <<"and b is  "<<b<<endl;

return 0;
}
