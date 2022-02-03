#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

// first we are going to create a class which is specific for the integer datype.
// class vector{
//    public:
//       int* arr;
//       int size;
//       vector(int n){//paramenterized constructor
//           size = n;
//           arr = new int[size];//in public section we have only decleared the pointer, so here we are creating array using the new keyword and arr, going to point them.
//       }
//       int dotProduct(vector &v){// v is an reference object, which is going to point the value of object which is passed to the dotProduct() function.
//          int d = 0;
//          for(int i = 0; i < size; i++){
//              d+= this->arr[i] * v.arr[i];
//          }
//          return d;
//       }

// };

// Now we are going to create the template, using these template we can create the class .
template <class t>
class vector{
   public:
      t* arr;
      int size;
      vector(int n){//paramenterized constructor
          size = n;
          arr = new t[size];//in public section we have only decleared the pointer, so here we are creating array using the new keyword and arr, going to point them.
      }
      t dotProduct(vector &v){// v is an reference object, which is going to point the value of object which is passed to the dotProduct() function.
         t d = 0;
         for(int i = 0; i < size; i++){
             d+= this->arr[i] * v.arr[i];
         }
         return d;
      }


};
 
int main()
{
//    vector v1(3);
//      v1.arr[0] = 4;
//      v1.arr[1] = 3;
//      v1.arr[2] = 1;
//    vector v2(3);
//      v2.arr[0] = 1;
//      v2.arr[1] = 0;
//      v2.arr[2] = 1;
//      int a = v1.dotProduct(v2);
//      cout<<a<<endl;

//   creating template of different datatype.
/* creating a class which is specific to the float datatype.*/
//   vector <float> v1(3);   
//   v1.arr[0] = 1.4;
//   v1.arr[0] = 3.3;
//   v1.arr[0] = 0.1;

//   vector <float> v2(3);
//   v2.arr[0] = 0.1;
//   v2.arr[0] = 1.90;
//   v2.arr[0] = 4.1;

//   float k = v1.dotProduct(v2);
//   cout<<k<<endl;
  vector <int> v1(3);   
  v1.arr[0] = 4;
  v1.arr[1] = 3;
  v1.arr[2] = 1;

  vector <int> v2(3);
  v2.arr[0] = 1;
  v2.arr[1] = 9;
  v2.arr[2] = 4;

  int k = v1.dotProduct(v2);
  cout<<k<<endl;

return 0;
}