#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int t;
 cin>>t;
 while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;   
     int requiredBags = 0;

     if(a <= d){
       requiredBags = 3;
       if(a+b <= d){
            requiredBags = 2;
            if(a+b+c <= d){
              requiredBags = 1;
            }
            else{
               requiredBags = 2;
            }
       }
       else{
           requiredBags = 3;
       }
     }
     else{
        requiredBags = 3;
     }
cout<<requiredBags<<endl;

 }
return 0;
}