// #include<iostream>
// using namespace std;
 
// /* global variable decleration here:- */

// class complex{
//     int a,b;
//     public:
//      complex(int x,int y);/* decleraing the constructor */
//      void printf(void){
//          cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
//      }
// };

// complex::complex(int x,int y){
//    a = x;
//    b = y;
// }
 
// int main()
// {
//  complex m(4,5); //  implict call.
//  m.printf();
//  complex n = complex(10,15);  //explict call.
//  n.printf();
// return 0;
// }

/* write a program to create the point  */

#include<iostream>
#include <cmath>
using namespace std;
 
 class point{
     int x,y;
     public:

//   constructoor decleration.
     point(int a,int b);

     void printf(){
         cout<<"the x and y node of the point is "<<x<<", "<<y<<endl;
     }

     float distance(point p1, point p2);
 };

 point::point(int a,int b){
     x = a;
     y = b;
 }

 float point::distance(point p1, point p2){
    int sum = (p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y);
    float(sum);
    float root = sqrt(sum);
    return root;
 }
 
int main()
{
 point p(4,7);
 p.printf();
 point q(5,6);
 q.printf();
 float m = distance(p,q);
return 0;
}