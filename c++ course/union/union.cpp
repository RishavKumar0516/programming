#include<iostream>
using namespace std;
union money{
    int rice;
    char s;
    float pound;
};
int main(){
union money cash;
cash.rice=34;
cout<<cash.rice;
cash.s='c';
cash.pound=43.67;
//cout<<cash.s;//while printing these you get the garbage value.
//cout<<cash.pound;// while printing these you get the garbage value.
return 0;
}