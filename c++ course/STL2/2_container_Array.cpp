#include<bits/stdc++.h>
using namespace std;
 

//   void print(array<int, 5> &arr){
//     for(int i = 0; i < 5; i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<"\n";
//   }

/*  
  NOTE :- In c++ the maximum size of the array you can declare globally is 10^7
     int arr[10000000] --10^7( int, double, char)

      If the data Type is boolean then, maximum size of the array you can decleare
      globally is 10^8
      bool arr[100000000];  --10^8--(only for boolean datatype) 

      note:- IF YOU USE MORE THEN THE MEMORY SPECIFIED MEMORY THEN IT GIVES YOU
      THE " Segmentation Fault " ERROR
 */


  // when we declare the STL array as global then it stores 0, if we do not  initialize them
  //array <int, 5> nums;            // ->   {0, 0, 0, 0, 0}
 
int main()
{

  /*  
  NOTE :- In c++, If you are declearing an array inside main function, then the 
          maximum size of the array you can declare  is 10^6.
          int arr[1000000];  --10^6--( int, double, char)

          If the data Type is boolean then, maximum size of the array you can
          decleare inside the main function is 10^7
          bool arr[10000000];  --10^7--only for boolean(data type) array 


  note:- IF YOU USE MORE THEN THE MEMORY SPECIFIED MEMORY THEN IT GIVES YOU
      THE " Segmentation Fault " ERROR
 */
 
 // we define normal array as
 // int arr[100];
 // In STL array is a container, so in STL we define container array as    */
 //  array <int, 5> arr;   // ->   {?, ?, ?, ?, ?}
 /* if we decleare the array inside the main function and does not initialize
  its value then, it stores garbage value.  */
 //  print(arr);
 //  print(nums);  //printing the global array,by default, global array initialize with 0
    //array<int, 5> nums2 = {1};  // ->  {1, 0, 0, 0, 0}
    //int arr2[1000] = {0};       //  -> these initialize first element of arr2 to 0

    //array<int, 5> arr3;
    // fill() function :- this initialize the whole array with given value
    //arr3.fill(10);    //  -> {10, 10, 10, 10, 10}
    // at() function :- you can access the value at any index. it takes index as input
    // for(int i = 0; i < 5; i++){
    //     cout<<arr3.at(i)<<" ";
    // }
    // cout<<endl;

    //------------------------------Iterators----------------------------------
    /* various type of iterator
    1. begin() :- It always point to the starting/ first element of the container
    2. end() :- It is pointing to the right after the last element of the container. 
                it basically point to the empty address after the end/last element 
    3. rbegin() :- rbegin means reverse begin, so it always points to the last
                   element of the container
    4. rend() :- It is pointing to the right before the first element of the container. it basically point to the empty address before the first element 
    Note:-  rbegin() points to the last element and end() points to after the last element(which is empty address).
     */

    // Lets iterate through the array
    array<int, 5>arr1 = {1, 3, 4, 5, 6};

    // auto means automatically creates an iterator pointer of container data type. and it points to the first element of the container. here  iterator is a pointer so we are printing the value pointed by pointer using *(astrick) symbol

     for(auto itr = arr1.begin(); itr != arr1.end(); ++itr){
        cout<<*itr<<" ";
     }

//prints the array in reverse. rbegin() points to the last element of the container and when we increment the iterator it points to ite previous element.
     for(auto itr = arr1.rbegin(); itr != arr1.rend(); ++itr){  
        cout<<*itr<<" ";
     }

     for(auto itr = arr1.end()-1; itr >= arr1.begin(); --itr){   //prints the array in reverse
       cout<<*itr<<" ";
     }

//  here auto of itr means, the element itself. itr is the first element of the container and always move forward in each iteration. it moves to the next element one by one.
//  these is known as forEach loop in c++
    for(auto itr : arr1){
        cout<<itr<<" ";
    }
    cout<<"\n";

    string s = "xhegcwe";
    for(auto c : s){
      cout<<c<<" ";
    }
    cout<<"\n";

    //size() :- this function will return you the size of array.
    cout<<arr1.size()<<endl;
    // front() :- this returns the first element of the array.
    cout<<arr1.front()<<endl;  // or  arr.at(0);
    // back() :- this returns the last element of the array.
    cout<<arr1.back()<<endl;  // or arr.at(arr.size()-1)




return 0;
}