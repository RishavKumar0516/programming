#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

union money{
 int productid;
  char name[20];
  float price;
};
 
int main()
{
   union money obj1,obj2;
   cout<<"input the product id : "<<endl;
   cin>>obj1.productid;

   cout<<"input the product name : "<<endl;
   cin>>obj1.name;

   cout<<"input the product price : "<<endl;
   cin>>obj1.price;


   cout<<"input the product id : "<<endl;
   cin>>obj2.productid;

   cout<<"input the product name : "<<endl;
   cin>>obj2.name;

   cout<<"input the product price : "<<endl;
   cin>>obj2.price;


return 0;
}