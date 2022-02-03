#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* =======================   priority_queue  ======================= */

/* 
   1.  priority_queue is the most important data structure which is used in 
       competative programming.

   2. we know about set, it stores unique elements in sorted order but time complexity
      is O(log(n)). we also know about unordered_set, it stores unique elements in
      random order and in most of the cases the time complexity is linearO(1),
      but in worst cases the time complexity is O(n).

   3. Priority_queue stores element in a sorted order and stores duplicate. it stores element in decending order. it stores maximum element at the top. thesefore it is also known as maximum priority queue.

   4. time complexity of all the operation used in priority queue is log(n) times

   5. it is implemented using heap sort (heapify).

 */
 
int main()
{
    /* the main functio used in priority queue is
    push
    size
    top
    pop
    empty */

    priority_queue<int> pq;
    pq.push(1);  // insert the element in priority_queue.
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout<<pq.top()<<endl; // prints 6
    pq.pop();   // delete top most element 6
    cout<<pq.top()<<endl; // prints 5

    /* storing pairs in proirity queue */
    /* 
        first it find the maximum element according to first value of pair, if their exists same another element then, it finds the maximum element in second value of pairs
     */
    priority_queue< pair< int, int>> pq2;
    pq2.push({1, 5});
    pq2.push({2, 1});
    pq2.push({1, 7});
    pq2.push({1, 8});

    /* ----------------  minimum priority queue   -------------------- */

    /* 
      it stores the minimum or smallest element at the top of priority_queue.
      so it stores element in ascending order

      how to make minimum priority queue  :
      while inserting if we do negation or multiply each element with -1 and then 
      insert it,
      and while getting we multiply each element with -1 and then getting it

      explaination :- when we multiply every number with -1 then,
          1 x -1 = -1
          5 x -1 = -5
          2 x -1 = -2
          6 x -1 = -6
        we know that priority queue store maximum element at the top so it stores 
        element as :
          -1 > -2 > -5 > -6 
          now  top most element is -1 so while getting multiply it with -1 again
          and we have minimum element at the top.

     */

     // int arr[4] = {1, 5, 2, 6}; inserting these in priority_queue

    priority_queue<int> minpq;
    minpq.push(-1);  // insert the element in priority_queue.
    minpq.push(-5);
    minpq.push(-2);
    minpq.push(-6); 

    cout<< -1 * minpq.top()<<endl;  // prints 1
    minpq.pop();
    cout<< -1 * minpq.top()<<endl;  // prints 2

    /*------ another way of defining minimum priority queue is ------- */

    // syntax for declearing minimum priority_queue, vector and greater used inside the syntax are part of syntax. 
    priority_queue<int ,vector<int>, greater<int>> minpq2; 

    // it doesn't need to multiply each element with -1
    minpq2.push(1);  // insert the element in priority_queue.
    minpq2.push(5);
    minpq2.push(2);
    minpq2.push(6);

    cout<<minpq2.top();  //   this prints 1

    /*  how to store pair in minimum priority queue
         Just replace the data type used in the syntax of minimum priority queue by pair.

    */
     priority_queue< pair<int, int> ,vector<pair<int, int>>, greater<pair<int, int>>> minpq3;

    minpq3.push({1, 5});
    minpq3.push({2, 1});
    minpq3.push({1, 7});
    minpq3.push({1, 8});

    cout<<minpq3.top().first<<" "<<minpq3.top().second<<endl;  //prints {1, 5}
    


 
return 0;
}