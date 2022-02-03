#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 /* containers which stores element in linear forms are :- Array, Vector 
     Algorithm on array and vector

     All of these algorithm are of one lines but time complexity is similar to implemented code.
 */
   // ----------------  array  --------------------
   int n;  
   int arr[n];
   for(int i= 0; i < n; i++){
       cin>>arr[i];
   }

   /* 1. sorting */

   // sorting in array
    sort(arr, arr+n);  //sort the array of size n in increasing order

    // to sort the array from 1st index to 3rd index
    sort(arr+1, arr+3);

    // 2. reversing

    //to reverese the array 
    reverse(arr, arr+n);

    // to reverse the array from 1st index to 3rd index
    reverse(arr+1, arr+3);

    // 3.finding maximum and minimum element

      //If i want to find the maximum element in any index range i to j give me maximum
      //generally how we do this is:
      int i,j;
      cin>>i>>j;
      int max = INT_MIN;
      for(int k = i; k <= j; k++){
         if(arr[i] > max){
             max = arr[i];
         }
      }
      // we can achieve the maximum element using algorithm
      //   max_element(first_Iterator, end_Iterator); these returns pointer to maximum   element, so for getting value we dereference the pointer.

      int ele = *max_element(arr+i, arr+j);  // returns value of maximum element

      // for finding minimum element we use 
      ele = *min_element(arr,arr+n);  // return minimum element from arr array

    // 4. finding the sum of the number in given range  i to j from the array.
      //generally we find the sum of range
      cin>>i>>j;
      int sum=0;
      for(int k = i; k < j; k++){
          sum+=arr[i];
      }
      //another way
      /*  accumulate(first_Iterator, end_Iterator, 0) -> it takes first iterator
      and the second iterator and the initial sum*/
      int sumofnumber = accumulate(arr, arr+n, 0);

   // 5. finding occurance of the element in given array
      //arr[] -> [1, 6, 7, 1, 2, 1, 3]
      // x= 1
      // tell me how many times the element 1 occours in the array

      // Generally we can solve this by:
      int cnt = 0;
      int x;
      cin>>x;
      for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cnt++;
        }
        cout<<cnt;
      } 

      // Using the algorithm
      //  count(first_Iterator, Last_Iterator, x);  it returns the occurance of element x from the array.
      cnt = count(arr, arr+n, 1);   

  // 6. first occurance of any element
    //arr[] = {1, 2, 5, 1, 2, 4, 6};
    // I want you to find the first occourance of 2 and it is at the index 1.

    // Generally we can do this as, 
    int ind = -1;
     x = 2;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            ind = i;
        }
    } 
    cout<<ind;

    // Using the single line algorithm
    auto it = find(arr, arr+n, 2); // returns an iterator pointing to the first instance of it, or else it returns pointing to the end() if it is no their.

    /* If you subtract any iterator(pointer) with begin() then you will get the
    index at which iterator is pointing */

    if(it == arr+n-1){
        cout<<x<<" is not persent in the given array"<<endl;
    }
    else{
    ind = it - arr; // name of array contains base address of first element of the array or name of array points to the first element of array
    cout<<" Element is persent at index "<<ind<<endl;
    }


 // 7. Binary search
    // This algorithm always work on sorted array.
    // arr[] = {1, 5, 7, 9, 10}
    // x = 9
    // returns true -> 9 exist in my arr
    // x = 8
    // returns false -> 8 does not exist in my arr

    //syntax
    //  binary_search(first_Iterator, lastIterator, x);
    // returns true or false
     bool result = binary_search(arr, arr+n, 8);

 // 8. lower_bound function



   



   //  ----------------------- vector  ------------------------

   vector<int> vec(5, 0);
   for(int i=0;i<5;i++){
       cin>>vec[i];
   }
// 1. sorting in vector

    //  vec  -> {1, 6, 2, 7, 4}
    //   index   0  1  2  3  4
   //sorting in vector :- it takes first iterator and last iterator
   sort(vec.begin(), vec.end());  // sort element from first iterator to last iterator

   // to sort the vector from 1st index to 3rd index
   sort(vec.begin()+1, vec.end()-1); 
   //       or
   sort(vec.begin()+1, vec.begin()+4);   //   [1, 4) it begins sorting from 1st index (vec.begin()+1) and sort up to 3rd index (vec().begin()+4) 4th index is excluded.

// 2. reversing

   //to reverse the vector
   reverse(vec.begin(), vec.end());  //it reverse the element from starting index to to ending index, excluding the  vec.end().

    // to reverse the vector from 1st index to 3rd index
   sort(vec.begin()+1, vec.begin()+4); // it reverse the element from the first index to the last index, excluding the last index.

// 3.finding maximum and minimum element

   //for finding maximum element in vector using single line of code.
   auto it = max_element(vec.begin(), vec.end()); // these returns iterator pointer to maximum element.
   auto it = *max_element(vec.begin(), vec.end()); // these returns value of maximum element because we dereference the iterator return by function.
   
   // for finding the minimum element we use
   int elem = *min_element(vec.begin(), vec.end()); //these returns the minimum element.

// 4. finding the sum of the number in given range  i to j from the vector.
    //  accumulate(first_Iterator, end_Iterator, 0) initial sum is 0.
     int sumofelement = accumulate(vec.begin(), vec.end(), 0);

// 5. finding occurance of the element x in given vector
    x = 5;
    cnt = count(vec.begin(), vec.end(), x);

// 6. first occurance of any element in vector

    // Using the single line algorithm
    x = 2;
    auto itr = find(vec.begin(), vec.end(), x); // returns an iterator pointing to the first instance of it, or else it returns pointing to the end() if it is no their.

    /* If you subtract any iterator(pointer) with begin() then you will get the
    index at which iterator is pointing */
    if(itr == vec.end()){
        cout<<x<<" is not persent in given vector"<<endl;
    }
    else{
    ind = itr - vec.begin();  // it gives the index
    }

// 7. Binary search
    // This algorithm always work on sorted array.
    //syntax
    //  binary_search(first_Iterator, lastIterator, x);
    // returns true or false
      result = binary_search(vec.begin(), vec.end(), 8);

// 8. lower_bound function

      



return 0;
}