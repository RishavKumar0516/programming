#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

template <class t1, class t2>
class myclass{
    public:
       t1 data1;
       t2 data2;
       myclass(t1 a, t2 b){
            data1 = a;
            data2 = b;
       }
       void display(){
           cout<<this->data1<<" "<<this->data2;
       }
};
 
int main()
{
 myclass <int, int> obj(56, 76);
 obj.display();
 myclass <float, char> obj2(7.6, 'r');
 cout<<"\nRunning for display function"<<endl;
 obj2.display();
 myclass <int, char> obj3(36, 'r');
 cout<<"\nRunning for display function"<<endl;
 obj3.display();
return 0;
}