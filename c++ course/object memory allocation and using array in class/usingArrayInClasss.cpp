/* how to use array in class */

#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class shop{

    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(void){counter = 0;}
    void getPrice(void);
    void displayPrice(void);

};

void shop::getPrice(void){

    cout<<"Enter Id of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
 
int main()
{
     shop dukaan;
 dukaan.initCounter();
 dukaan.getPrice();
 dukaan.getPrice();
 dukaan.getPrice();
 dukaan.displayPrice();
return 0;
}