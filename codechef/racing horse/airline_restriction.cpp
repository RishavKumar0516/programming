#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int t,a,b,c,d,e;
 cin>>t;
 while(t--){
    cin>>a>>b>>c>>d>>e;

    if(a+b<=d && c <= e ){
        cout<<"YES"<<endl;
    } 
    else if(a+c <= d && b <= e){
        cout<<"YES"<<endl;
    }
    else if(b+c <= d && a <= e){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
return 0;
}