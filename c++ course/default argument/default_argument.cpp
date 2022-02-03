#include<iostream>
using namespace std;
int moneyRecived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int money;
    cout<<"enter the value for money"<<endl;
    cin>>money;
    cout<<"if you have "<<money<<"rs in your bank account,you will recieve "<<moneyRecived(money)<<"rs after one year"<<endl;
    cout<<"for VIP:if you have"<<money<<"Rs in your bank account,you will recieve    "<<moneyRecived(money,1.1)<<"rs after 1 year";
return 0;
}