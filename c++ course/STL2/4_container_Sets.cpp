#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* ========================   SETS   ========================== */
/* 
   1.  SETS :- It stores unique elements in sorted order. The first element of the set
       is the smallest elememt and las element of the set is largest element.
       It is implemented using BST(binary search tree)

   2.  You cannot access set using 
       st[0],st[1] etc this is wrong.
       You have to use ITERATORS for accessing the elements.

   3.   SET CAN STORE ANY DATA TYPE IT CAN BE PRIMITIVE(int, float, char, string,
        node, stack, queue, list, pairs, vector, map etc) in sorted order.

   4.  All the operation takes log(n) times in set, where n is size of set
    
   5.  we use set when we need to store unique element in sorted order from the 
       given list.   
 */
 
int main()
{

    //given an n elements, tell me the number of unique elements
    /* let we have given an array of numners and we have to find the unique element
    arr[] = {2, 5, 2, 1, 5}; unique elements are -> {1,2,5}
     */

    set<int> st;
    int arr[5] = {2, 5, 2, 1, 5};
    for(int i = 0; i < 5; i++){

        int x = arr[i];
        /* insert() : this function is used to insert the elements inside the set
           and it takes O(log(n)) times to insert the elemen. where n is the size 
           of set.   */
        
        st.insert(x);
    }
    //  st --> {1, 2, 5}
    /*  erase() : this function is used to delete the particular element from the
                  set. it takes Iterator or element as an argument.
                  it takes O(log(n)) times to delete the element. where n is the size 
           of set.  */
    //st.erase(st.begin());  //  st.erase(iterator)  // st -> {2, 5}
    /* for deleting first couple of elements it takes 2 argument 
       1.   starting iterator :- points to first elements of the set
       2.   ending iterator :- st.begin()+2 pointing to 5, but it erase only 1 and 2*/
    //st.erase(st.begin(), st.begin()+2);
    st.erase(5); // it also takes key as argument and delete those key from the set

    /* different forms to implementing set : Every thing which we have learn in vector is appplicable here. */
    set<int> st2 = {1, 5, 7, 8};

    /* find() : it takes key as an argument and return an iterator pointer which points to the key. it takes O(log(n)) times to find the element. where n is the size of set. */
    //auto itr = st2.find(7);   // itr is an iterator pointer to 7
    //if the key we are searching for doesn't exists then it returns st.end().
        auto itr = st2.find(9); //  returns st.end(), when itr points to 8, st.end() is right after to itr.

    st2.emplace(6);  //  is equal and faster then st.insert(6)
    cout<<st2.size()<<endl;  // size of set

   /* traversal of set */
   // here iterator 'it' is an pointer pointing to each element of set one by one.
   for(auto it = st2.begin(); it!= st2.end(); it++){
       cout<<(*it)<<" ";
   }

   // here iterator 'it' is an element itself of the set. 'it' is just like a variable storing the value of each element of set. here "it" is not a pointer.
   for(auto it : st2){
      cout<<it<<" ";
   } 
   cout<<"\n";


   /* =======================  unordered_set  =========================== */

   /* 1. unordered_set  store unique elements in any random order. its order changes
         every time.
         It is implemented using hash table.

      2. average time complexity of all the operation in unordered_set is O(1),
         but the worst case time complexity is linear O(set size) in nature
      
     3. we use unordered_set when it is required to store only unique elements. order
        does not matter. when you do not need to store element in ascending order.
        so as possible use most of the time unordered_set because its time complexity is O(1). 
        If it gives tle(time limit exceed) means, it reaches worst case, then switch to set.
        worst case reaches 1/100 in unordered_set so always use this.
   
    */

   unordered_set<int> unset;
   unset.insert(2);
   unset.insert(3);
   unset.insert(5);
   unset.insert(4);
   unset.insert(0);
   for(auto it : unset){
       cout<<it<<" ";
   }


   /* =======================  multiset  ======================= */
   /* 
   1. multiset stores all the element in a sorted order. it also stores duplacate
      elements.
   2.
    */

   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(2);   // ms.emplace(2);
   ms.insert(2);
   ms.insert(4);
   ms.insert(3);  
   ms.insert(3);  //  ms  --> {1, 1, 2, 2, 3, 3, 4}

   //ms.erase(2);  // it deletes all the instance 0f 2.
   //auto it = ms.find(3)  // return an iterator pointer pointing to the first element of 3.
   //ms.erase(ms.find(2));  //  it delete first element of 2.
   //ms.erase(ms.find(2), ms.find(2)+2 ) // it delete two element of 2.
   //ms.clear();  // delete the entire set.
   //me.erase(ms.begin(), ms.end())  // delete the entire set.
   
   ms.count(2); // it returns the number of 2 stored in multiset.

   for(auto itr = ms.begin(); itr != ms.end(); itr++ ){
       cout<<*itr<<" ";
   }
   cout<<"\n";
   for(auto itr : ms){
       cout<<itr<<" ";
   }


    
 
return 0;
}