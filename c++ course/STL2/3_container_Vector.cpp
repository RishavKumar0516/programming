#include<bits/stdc++.h>
using namespace std;

/* -===========================  VECTOR  ===========================- */
/* 
    1. generally when you define the array you have to predefine the size of the array
       and once you predefine the size of the array, you cannot keep on adding the element more then size.
       int arr[100];

    2. In vector it is not neccessary to define the size, so you can keep
       adding as much element you want.

*/
/*  
  NOTE :- In c++ the maximum size of the array/Vector you can declare globally 
          is 10^7
          vector<int> arr(10000000) -- 10^7 for( int, double, char)

         If the data Type is boolean then, maximum size of the array/Vector you can decleare globally is 10^8
         vector<bool> arr(100000000);  -- 10^8(only for boolean datatype) 

      note:- IF YOU USE MORE THEN THE MEMORY SPECIFIED MEMORY THEN IT GIVES YOU
      THE " Segmentation Fault " ERROR
 */
int main(){

/*  
  NOTE :- In c++, If you are declearing an array/Vector inside main function, then the 
          maximum size of the array/Vector you can declare  is 10^6.
         vector<int> arr(1000000);   --10^6--( int, double, char)

          If the data Type is boolean then, maximum size of the array/Vector you can
          decleare inside the main function is 10^7
         vector<bool> arr(10000000);   --10^7--only for boolean(data type) array 


  note:- IF YOU USE MORE THEN THE MEMORY SPECIFIED MEMORY THEN IT GIVES YOU
      THE " Segmentation Fault " ERROR
 */

    vector< int > arr;  // empty vector of size 0

    // creating a vector of initial size 4 and initialize all the 4 element with 0. after this you can also add new elements

    vector< int > vec(4, 0);  //   {0, 0, 0, 0}
    vector< int > vec2(4, 10);//   {10, 10, 10, 10}
    
    //cout<<arr.size()<<endl;   // prints 0
    //-----------push_back() :- it insert the value/element inside the vector.
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(4);
    //cout<<arr.size()<<endl;   // prints 3
    //----------pop_back() :- it deletes/pop the last element inside the vector.
    arr.pop_back();
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    //cout<<arr.size()<<endl;
    //----------clear() :- it deletes all the element from the vector.
    arr.clear();  //erase all the element at once.
    //cout<<arr.size()<<endl;

    /* If i want to create a new vector(vec3) and want to add all the element of 
       another vector(vec2) in vec3 then,

       1. Add the element from vec2.begin() till vec2.end(), excluding vec2.end()
        in vec3
       2. copy the entire vec2 in vec3
    */
   
   vector<int> vec3(vec2.begin(), vec2.end());
   //  copy the entire vec2 in vec3
   // vector<int> vec3(vec2);

   vector<int> raj;
   raj.push_back(1);
   raj.push_back(3);
   raj.push_back(2);
   raj.push_back(5); // -> {1, 3, 2, 5}
   //cout<<*(raj.begin())<<endl;
    /* If i want to create a new vector(rishav) and want to add only the first and second element of vector(raj) in vector (rishav)
    */
   /*Add the element from raj.begin() till raj.begin()+2, excluding raj.begin()+2.
       so it start adding element form raj.begin() to raj.begin()+1 
       so it start adding element from first parameter, to second parameter-1.
    
    NOTE --- THESE raj.begin() IS A POINTER POINTING TO THE FIRST ELEMENT OF THE 
             RAJ AND  raj.begin()+2 or raj.end()-2 IS A POINTER POINTING TO THE 
             THIRD ELEMENT FROM THE raj.begin() OR THIRD ELEMENT FROM THE raj.end()
            because end() is pointing to the right after the last element of the vector. 
   */
  //               starting point  ending point
   vector<int>rishav( raj.begin(), raj.begin() + 2 );
   //  vector<int>rishav( raj.begin(), raj.end() - 2 );

   //emplace_back()  :- It works same as push_back(). emplace_back() takes lesser time then push_back().
   arr.emplace_back(5); 

   //  lower bound, upperbound

   // swap swap(v1, v2);
   // begin(), end(), rbegin(), rend() this all work same in vector.


   /* ----==================   2D VECTOR   =====================-----*/

   /* 2D vector are dynamic across rows and columns you are free to add any number of rows(vector containing vector of integers) and column(vector of integers). */

   vector <vector<int>> vect;
   /* 
      what above code means is :-
      vect is a vector which is going to store the vectors of integers.
      each index of vect vector is pointing/storing  the vector of integers.
    */
    //ex:-
     vector<int> rohan1;
     rohan1.push_back(1);
     rohan1.push_back(2);

     vector<int> rohan2;
     rohan2.push_back(10);
     rohan2.push_back(20);

     vector<int> rohan3;
     rohan3.push_back(19);
     rohan3.push_back(24);
     rohan3.push_back(27);

     vect.push_back(rohan1); // vector vact[0] storing the vector of integers(rohan1).
     vect.push_back(rohan2); // vector vact[1] storing the vector of integers(rohan2)
     vect.push_back(rohan3); // vector vact[2] storing the vector of integers(rohan3)
    

    //  accessing the vector of vectors
      // itr is vector itself. itr is the first vector of vector(vect)
     for(auto itr : vect){
         //vtr is the first element of itr vector
         for(auto vtr : itr){
            cout<<vtr<<" ";
         }
            cout<<endl;
     }
     cout<<"\n";
     // we can also access the vector using traditional way
     /* 
        vect.size() is the number of vectors of integers stored in vect or 
        vect.size() is the number of vector stored in vect
        At every index of vector(vect) there is vector of integers is stored.
        ex- rohan1, rohan2, rohan3
        so when we do vect[0].size(), it returns the size of vector of integers(rohan1).
        vect[i].size() returns the size of (vector of integers) present at the ith
        index in vector vect. 
      */
     for(int i = 0; i < vect.size(); i++){
         for(int j = 0; j <vect[i].size(); j++){
             cout<<vect[i][j]<<" ";
         }
         cout<<endl;
     }

     // How to define 10x20 vector of vectors
     /* 
     explaination:-  
      1.  vector<vector<int>> vect2   :- these means create a vector of vectors
        so vect2 is a vector of vectors.

      2.  vector<vector<int>> vect2(10  :- these means create a 10 size of vector
          vect2, where every index of vect2 is going to point the vector of integers.
          
      3.  vector<int> (20, 0)  :- it creates a vector of integers of size 20 and 
          initialize every element with 0.

      4.  vector<vector<int>> vect2(10, vector<int> (20, 0)) so this means is 
          create a vector vect2 of size 10. where each index of vect2 vector 
          will store the vector of integers of size 20(each element is 0).        
      */
     vector<vector<int>> vect2(10, vector<int> (20, 0));

    for(int i = 0; i < vect2.size(); i++){
         for(int j = 0; j <vect2[i].size(); j++){
             cout<<vect2[i][j]<<" ";
         }
         cout<<endl;
     }

     // adding a new vector of integers in vector of vectors vect2
     vect.push_back(vector<int>(20, 1));/*creating a vector of integers of size 20 
      and initialize every element with 1 and then added this inside of vect. 
     */


     // ----------------- array of vectors ---------------

 /* array of vectors are dynamic across columns only, you are free to add any number of column(vector of integers) but not the   */

     vector<int> arr[4];
    //  arr[1].push_back(0);
     /* 
      Explaination:-   
        1.   int arr[4] means array of integers of size 4. it creates an array of
             integers of size 4
        2.   arr[4] :-  means array of size 4.
        3.   vector<int>  :- means vector of integers.
        4.   vector<int> :- here at the place of int (data type),
             vector<int> is given so it means vector<int> is a data type.

        vector<int> arr[4];  :- means, array of vectors of size 4. where each index is storing the vector of integers.
        now you cannot store more then 4 vectors in array arr, because it is not dynamic. but you can store as many integers in the index of each array arr. because each index of arr array is a vector.       
      */

     /* when to use array of vectors :- when you know that how many vectors actually
         you need. 
        when to use vector of vectors :- when you don't know that how many vectors actually you need. 
         */

/*     -----==============  3D VECTOR  ================-----------    */
   // How to define 10x20x30 vector of vectors int arr[10][20][30]
   /* 
      pahle hum 10 ko define karege aur 10 ko define kerne ke lia humko uska datatype 
      define kerna parega, aur humko vector ke andar vector ke andar ek aur vector dalna padega.
      ab humara 1d vector define ho gaya hai ab hum eske andar 2d vector define karege.
    */

   vector<vector<vector<int>>> vecto(10, vector<vector<int>> vect2(10, vector<int> (20, 0)));
}