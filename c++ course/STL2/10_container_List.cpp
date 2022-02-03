#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* =======================    LIST   ======================== */
/* 
   1. In list deletion operation is very fast it deletes element in O(1) time
      complexity operation.

   2. If you need any data structure which you can access from front and end both the
     side then always use list.

   3. If you want any data types which works with puch_back then use vectors.  

   4. AllTHE OPERATION IN STL ARE GENERALLY O(1) OR O(log(n)). YOU DON'T NEED TO REMEMBER.

 */
 
int main()
{
   list< int > ls;
    /* the function used in dequeue are 
     push_front()
     push_back()
     pop_front()
     pop_back()
     begin(), end(), rbegin(), rend()
     size()
     clear()
     empty()
     at()
     remove()  this deletes list in O(1) time complexity.
      */

     ls.push_front(1);
     ls.push_front(2);
     ls.push_front(13);
     ls.remove(2);   //  -> O(1) operation
return 0;
}

/* 
QUESTION:  
1.  given n elements, prints the elements that occour maximum number of times
    input 
    5
    1 3 3 3 2
 sol - 
    int n;
    cin>>n;
    map<int, int> mpp;
    int maxi = 0;
    for(int i = 0; i < n; i++){  -----  n 
        int x;
        cin>>x;
        mpp[x]++;              ----  log(n)
        if(mpp[x] > mpp[maxi]){    ---  log(n)
            maxi = x;
        }
    }
    cout<<x<<endl; 

    overall time complexity is n(log(n));
    conclusion: If we solve this question with unordered_map then time complexity will be n for the loop and O(1) for other operation such as insertion.
    overall it takes O(nx1)
    but in worst case it takes O(nxn) time, their is very little probablity that
    worst case occour in unordered_map so when it occours it gives you TLE and then 
    you switch to the map.

    SO ALWAYS START SOLVING  PROBLEUM USING UNORDERED_MAP, BECAUSE ALL THE OPERATION IN UNORDERED_MAP IS O(1). BUT IF WORST CASE OCCOURED AND YOU GET TLE THEN SWITCH TO MAP.
    IF YOU ARE USING MAP AND GETTING TLE THEN SWITCH TO UNORDERED_MAP.


    2. given n elements, prints all elements in sorted order
    input
    n=6
    6 6 3 2 3 5
    
    int n;
    cin>>b;
    multiset<int> ms;
    for(int i = 0; i < n; i++){   ---- n
        int x;
        cin>>x;
        ms.insert(x);   ----- log(n)
    }
    
    for(auto it : ms){   ----- log(n)
        cout<<it<<endl;
    }

    overall complexity is n x log(n)
 */
  