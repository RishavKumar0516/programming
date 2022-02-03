#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* ===========================  MAP  =========================== */

/*  1.  MAP stores unique key/value pairs where key and pair can be of any data type.
        It  stores unique key/value pairs in sorted order coressponding to keys. you cannot insert duplicate keys in map.
    
    2.  if the inserting the same key which is already present in the map then, it 
        replace the existing value at the key with current one 

    3.  time complexity of every operation in map is O(log(n)), where n is the size 
        of map
 */
 
int main()
{
    map<string, int>mpp;
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["homa"] = 31;
    mpp["sandeep"] = 67;
    mpp["thakur"] = 89;
    mpp["raj"] = 29;  // this overwrites the existing value of raj with current one.

    mpp.emplace("raj", 45); // it is common to --> mpp.insert( key, value);

    //mpp.erase("raj");   //  it takes key as argument and delete the key/value pair from the map.
    //mpp.erase( mpp.begin());  // passing the iterator pointer of first element and it deletes first element of the map
    //mpp.erase(mpp.begin(), mpp.end()); //it deletes the entire map
    //mpp.clear()  //it deletes the entire map

    auto it = mpp.find("raj");// points to where raj lies

//  empty() := it checks whether map is empty or not. it returns boolean.
    if(mpp.empty()){  
        cout<<"map is empty"<<endl;
    }

    mpp.count("raj");// it always returns 1 because map store unique element, their is only one instance of map.

    //printing map
    /* 
    here 'it' iterator is a pointer pointing to the first element of the map
    so (*it) is the first element of the map and (*it).first is the key of first element and (*it).second is the value of first element.
     */
    for(auto it = mpp.begin() ; it != mpp.end() ; it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    // another way
    /* 
    here itr is not a pointer, itr is itself the first element of map.
     */
    for(auto itr : mpp){
        cout<<itr.first<<" "<<itr.second<<endl;  // or
        //  cout<<it->first<<" "<<it->second<<endl;
    }

     //=======================  UNORDERED_MAP   =======================
     /* 
       1. it stores unique key /value pairs in random orders. it doesn't store 
          elements in any order

       2. average time complexity of all the operation is  O(1) and
          in worst case the time complexity is O(n), n is the size of container

       3. unordered_map always store single keys and single values, uou cannot store pair,vactor, sets in it.   
      */

     unordered_map<int ,int > unmp;

     /* ======================   MULTIMAP   ===================== */

     /* 
       1. multimap stores all key/value pairs in sorted order. it store multiple 
          keys. it stores all duplicate in sorted order.
        
       2. time complexity of all operations is O(log(n)).
      */

     multimap<string, int> mulmap;
     mulmap.emplace("raj", 2);
     mulmap.emplace("raj", 4);

    //---=================   PAIRS ==================----

    /* 

    1. pair is a single element, it is not a container
       pair stores pair of values where values are of any data type.

    2. It is not a container, it is just a variable which stores key/value pairs 
    
     */

    pair<int, int> pr; //creating a pr variable of pair data type
    pr.first = 1;  
    pr.second = 10;
    //we can also decleare pair as
    pair<int, int> pr2 = {1, 2};
    // this means pr2.first is 1 and pr2.second is 2

    /* nested pair */
    /* this pair par storing the first value as pair itself and second value is int */
    pair <pair<int, int>, int> par = {{1, 5}, 20};
    /*
     how to access pair inside another pair or how you access {1, 5}
    sol-  the first value of pair par is a pair itself so par.first is the pair {1, 5}
          and pr.first.first is 1 and par.first.second is 5  
     */
      cout<<par.first.first<<endl;  
      cout<<par.first.second<<endl;
      cout<<par.second<<endl;

    /* this pair par storing the first value as pair itself and second value is 
    also pair itself */
        /*
     how to access pair inside another pair or how you access {1, 5}
sol-  the first value of pair par2 is a pair itself so par2.first is the pair {20, 30}
        and par2.first.first is 20 and par2.first.second is 30  
        and second value of par2 is a pair itself so par2.second is the pair {40, 50}
          and pr2.second.first is 40 and par2.second.second is 50
     */
      pair< pair<int, int>, pair<int, int>> par2 = {{20, 30}, {40, 50}};
      cout<<par2.first.first <<endl;  
      cout<<par2.first.second <<endl;
      cout<<par2.second.first <<endl;
      cout<<par2.second.second <<endl;
//  vector storing pair as element
      vector<pair<int, int>>vec;
      //inserting pair in vector
      vec.push_back( {1,2} );
      vec.push_back( {6,7} );
      vec.push_back( {3,5} );
      for(auto vit : vec){
          cout<<vit.first<<" "<<vit.second<<endl;
      }
      //set storing pair as element
      set < pair<int, int>> st;
            //inserting pair in set
      st.insert( {7, 8} );
      st.insert( {2, 8} );
      st.insert( {9, 6} );
      // map storing pair as key and int as value
      map < pair<int, int>, int> mpo;
            //inserting pair in map
        mpo[ {1, 2} ] = 4;
        mpo[ {5, 7} ] = 4;
        mpo[ {2, 2} ] = 4;
        mpo.insert({{4, 6}, 8}); 


 
return 0;
}