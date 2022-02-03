#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* ====================   Bitset   ====================== */

/* 
    Integers datatype takes 16 bits 
    character datatype takes 8 bits

    bitset is a container, not a datatype. it only stores 1s and 0s, it cannot stores a number. and if 1s is stored that means bit is set and 0s is stored that means 
    bit is unset.
    1s means set bit
    0s means unset bit
    
    whereas BITSET tends to takes 1 bit which 8 times smaller then character.
    this creates an array kind of structure.

    bitset is mainly used in segmentry probleum.

 */
 
int main()
{
   bitset<5> bt; 
   cin>>bt;   //  10101;
   /* the function which is used in bitset are 
   all()
   any()
   flip()
   none()
   set()
   reset()
   size()
   test()
    */
   //  all() : If all the bits are set it returns true and if any of the bit remain unset, it returns false.  In this example all the bits 10101 are set at 5 position.
   cout<<bt.all()<<endl;  // these returns true or false

 // any() : If any of the 1 bit from 5(size) is set then it returns true
   cout<<bt.any()<<endl;  //  10000  true
   cout<<bt.any()<<endl;  //  00000  false
   cout<<bt.count()<<endl; //returns number of set bit if bt = 10100 it prints 2,because 1 means set bit and it occours 2 times.

   // flip() : it takes position as argument as argument and convet 0 in 1 and 1 in 0 at those particular index.
   bt.flip(2);

   bt.flip(); //it flip the whole bt

//  let bt = 10000 so when none of set(1s) is persent in bt, it returns true and 
//   if any of the set(1s) is persent it returns false.
   cout<<bt.none()<<endl;   //  bt= 01000   false
   cout<<bt.none()<<endl;   //  bt= 00000   true

   bt.set();  // it sets the entire range with set(1s).  bt = 11111

   bt.set(2); // it sets the 2nd index with 1.

   bt.set(2, 0); //it sets the 2nd index with 0.

   bt.reset(); // it will turn all the index with 0s.

   bt.reset(2); // it rurns the 2nd index with 0.

   bt.size();  // it returns you the size.

   bt.test(1); // it checks if the bt is set or not at index 1.
 

return 0;
}