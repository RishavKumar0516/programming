#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

// class complex{
//     int x,y;

//     public:
//     complex(){
//         x=0;
//         y=0;
//     }
//     complex(int a, int b){
//         x = a;
//          y = b;
//     }
// };
 
// int main()
// {
//  complex p;

// return 0;
// }

//     copy constructor 


class Number{
    int a;
    public:

    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    Number(Number &obj){    //------copy constructor-------
        cout<<"Copy constructor called!!!"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"the number for these object is "<<a<<endl;
    }

};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();

    z2 = z;
    z2.display();
}