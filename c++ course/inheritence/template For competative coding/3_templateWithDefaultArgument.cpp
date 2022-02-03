#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
//  creating template using default argument.
template < class t1 = int, class t2 = char, class t3 = float> 
class mixture{
    public:
    t1 a;
    t2 b;
    t3 c;
    mixture(t1 x, t2 y, t3 z){
        a= x;
        b= y;
        c= z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main()
{
   mixture<>obj1(5, 'w', 4.5);//we are not passing any parameter of datatype so, these take it by default.
   obj1.display();
   mixture<int, char, char> obj2(2, 's', 'p');
   obj2.display();
return 0;
}
