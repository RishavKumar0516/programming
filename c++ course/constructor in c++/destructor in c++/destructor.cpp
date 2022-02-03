#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
int count = 0;


class num{
    public:
    num(){    //---------constructor-----------
        count++;
        cout<<"this is the time when constructor is called for object number "<<count<<endl;
    }
/*   when block of code is terminates then destructor is called. */
    ~num(){//-----------destructor------------
    cout<<"this is the time when my destructor is called for object number "<<count<<endl;
    count--;

    }
};
 
int main()
{
 cout<<"we are inside our main function"<<endl;
 cout<<"creating first object n1 "<<endl;

 num n1;
 {
     cout<<"entering the block"<<endl;
     cout<<"creating 2 more object"<<endl;
     num n2,n3;
     cout<<"Exiting the block"<<endl;
     cout<<"back to main function"<<endl;
 }
return 0;
} 