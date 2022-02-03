// #include<iostream>
// using namespace std;
 
// /* global variable decleration here:- */
 
// int main()
// {
//  int t;
//  int a,b,x,y,k;
//  int p_cost = 0,d_cost = 0;
//  cin>>t;
//  while(t--){
//      cin>>x>>y>>a>>b>>k;
//      p_cost = ((k*a)+x);
//      d_cost = ((k*b)+y);
//      cout<<p_cost<<endl;
//      cout<<d_cost<<endl;
//      if(p_cost > d_cost){
//          cout<<"DIESEL"<<endl;
//      }
//      else if(p_cost == d_cost){
//          cout<<"SAME PRICE"<<endl;
//      }
//      else{
//          cout<<"PETROL"<<endl;
//      }
//  }
// return 0;
// }

#include<stdio.h>
int main(){
  int t;
  int x,y,a,b,k;
  scanf("%d",&t);
  while(t--){
     scanf("%d %d %d %d %d", &x, &y, &a, &b, &k);
     int petrol = 0;
     int disel = 0;
     petrol = a*k+x;
     disel = b*k+y;
     if(petrol > disel)
     printf("DIESEL\n");
     else if(petrol < disel)
     printf("PETROL\n");
     else{
     printf("SAME PRICE\n");
     }
     
  }
}                                                     