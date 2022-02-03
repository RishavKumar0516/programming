#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class BankDeposite{
    int principal;
    int year;
    float interestRate;
    float returnValue;

    public:


      BankDeposite();
      BankDeposite(int p, int y, float r);
      BankDeposite(int p, int y,int R);
      void show(){
        cout<<endl<<"principal amount was "<<principal<<endl<<"return value after "<<year<<" year is "<<returnValue<<endl;
      }

};
 BankDeposite::BankDeposite(int p, int y, float r){
    principal = p;
    year = y;
    interestRate = r;
    returnValue = 0;
    for(int i=0;i< y;i++){
        returnValue = returnValue*(1+interestRate);
    }    
}
 BankDeposite::BankDeposite(int p, int y, int R){
    principal = p;
    year = y;
    interestRate = float(R)/100; 
    returnValue = 0;
    for(int i=0;i< y;i++){
        returnValue = returnValue*(1+interestRate);
    }
 }
int main()
{
 BankDeposite bd1,bd2,bd3;
 int p,y;
 float R;
 int r;

 cout<<"Enter the value of P, Y and R"<<endl;
 cin>>p>>y>>r;
 bd1 = BankDeposite(p,y,r);
 bd1.show();
 cout<<"Enter the value of p, y and r"<<endl;
 cin>>p>>y>>r;
 bd2 = BankDeposite(p,y,r);    
 bd2.show();
return 0;
}