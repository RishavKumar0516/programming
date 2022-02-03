#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
 class shop{
    int id;
    float price;
    public: 
    void setData(int a, float b){
        id =a;
        price = b;
    }
    void getData();
 };
 void shop :: getData(){
     cout<<"code of the item is "<<id<<endl;
     cout<<"the price of the item is "<<price<<endl;
 }

int main()
{
    int p;
    float q;
    int size = 4;
 shop *ptr = new shop[size];
 shop *temp = ptr;
 for(int i=0;i<size;i++){
     cout<<"Enter the id and price of the Item "<<i+1<<endl;
     cin>>p>>q;
     ptr->setData(p, q);
     ptr++;

 }

 for(int i =0;i< size;i++){
     cout<<"Item number : "<<i+1<<endl;
     temp->getData();
     temp++;
 }

return 0;
}