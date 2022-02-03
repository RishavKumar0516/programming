#include<iostream>
using namespace std; 
int main()
{
    /*switch case*/
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch (age){
        case 12: {
 cout<<"your age  is 18"<<endl;
 break;
        }
        case 22: {
            cout<<"you are 22"<<endl;
            break;
        }
        case 28: {
            cout<<"you are of 2 years"<<endl;
            break;
        }
        default :{
            cout<<"no special case"<<endl;
            break;
        }


    }
    cout<<" done with switch case "<<endl;
    return 0;
}



















