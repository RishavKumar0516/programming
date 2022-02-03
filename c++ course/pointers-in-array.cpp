#include<iostream>
using namespace std;
int main(){
    int marks[5]={45,34,23,12,78};
    cout<<"the address of array marks is "<<marks<<endl;
    cout<<"the address of array marks is "<<&marks[0]<<endl;
    int* p=marks;// or marks[0];
    cout<<"the value of array in term of pointer marks and p"<<endl;
    cout<<"*(marks)="<<*(marks)<<"   and   "<<"*p="<<*p<<endl;
    cout<<"*(marks+1)="<<*(marks+1)<<"   and   "<<"*(p+1)="<<*(p+1)<<endl;
    cout<<"*(marks+2)="<<*(marks+2)<<"   and   "<<"*(p+2)="<<*(p+2)<<endl;
    cout<<"*(marks+3)="<<*(marks+3)<<"   and   "<<"*(p+3)="<<*(p+3)<<endl;
    cout<<"*(marks+4)="<<*(marks+4)<<"   and   "<<"*(p+4)="<<*(p+4)<<endl;
    cout<<"or you can point the array as "<<endl;
    int scimark[5]={43,56,78,90,12};
    int* r=scimark;
    for(int i=0;i<5;i++)
    cout<<*(r++)<<endl;
    r=scimark;
    for(int j=0;j<=4;j++)
    cout<<*(++r)<<endl;
    

return 0;
}