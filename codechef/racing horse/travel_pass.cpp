#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int t;
 int a,b,n;

 cin>>t;
 while(t--){
    cin>>n>>a>>b;
    char s[n];
    int count =0;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i] =='0'){
          count += a;
        }
        else{
            count += b;
        }
    }
    cout<<count<<endl;

 }
return 0;
}