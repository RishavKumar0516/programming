#include<bits/stdc++.h>
using namespace std;
 

/* global variable decleration here:- */

/* =======================    QUEUE    =============================== */
/* 
  queue follows FIFO orincipal
  the function used in queue are
  push
  front
  pop
  size
  empty

  The time complexity of every operations in queue is constant O(1) but when you delete the entire queue manually it takes O(n) times. because it deletes every element from the queue.

  In stack as well as in queue there is no any push_back(), erase(), clear(), iterator
  works. 
  

 */
 
int main()
{
 queue<int> q;
 q.push(1); //  it is used to insert the element in queue
 q.push(5);
 q.push(3);
 q.push(6);
 q.push(7);
 cout<< q.front()<<endl; // it returns the first element inserted in the queue 1.
 q.pop();
  cout<< q.front()<<endl; // it returns the first element of the queue 5.

  //to delete the entitre queue their is no any clear function
//   while(! q.empty()){
//       q.pop();
//   }

return 0;
}