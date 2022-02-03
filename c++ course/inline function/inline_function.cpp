#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main(){
    int a=12,b=13;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=34;b=34;  
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=11;b=14;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=14;b=78;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=23;b=24;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=14;b=45;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    a=45;b=23;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
return 0;
}