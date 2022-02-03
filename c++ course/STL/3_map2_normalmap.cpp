#include<bits/stdc++.h>
using namespace std;

/*   In map, for inserting a single key/value pair, or
             for deleting a single key/value pair, or
             for find a single key/value pair, or
             for erase a single key/value pair, it takes O(log(n)) time complexity.

             if we do not set the value corressponding to key then by default it set to the 0 in integer, float, double.

             map store the value in sorted order corressponding to keys, and the keys of the map are unique. you cannot insert duplicate keys in map.
 */

void print(map<int, string> &m){
    //we can use auto in place of iterator.
    cout<<m.size()<<endl;
    for(auto &pr : m){
       cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    // map<int, string>m;
    // m[1] = "abc";
    // m[5] = "cdc";
    // m[3] = "acd";
    // m.insert({4, "afg"});
    //creating a iterator
    // map<int, string>::iterator it;
    // for(it = m.begin(); it != m.end(); ++it){
    //    cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    //print(m);

    //map store the value in sorted order corressponding to keys, and the keys of the map are unique. you cannot insert duplicate keys in map.

    //---------------EXP - 2-----------------------

    // map<int, string> m;
    //  m[1] = "abc";
    //  m[5] = "cdc";
    //  m[3] = "acd";
    //  m.insert({4, "afg"});
    //  m[5] = "fgh"; // it replace the existing value of map with current one.
    //  //auto it = m.find(3); //  it retruns the iterator of coressponding key.

    //  //find function:-

    //  auto it = m.find(6); //  if the key we are searching is not present in the map then it retruns the end iterator.
    //  if(it==m.end()){
    //      cout<<"no value present in the map."<<endl;
    //  }else{
    //  cout<<(*it).first<<" "<<(*it).second<<endl;

    //  }
    //  print(m);

    //  // erase function:- it takes key or iterator as an input and erase those keys and iterator from the map
    //  m.erase(4);
    //  print(m);


    // --------------EXP - 3-----------------------

    // map<int, int>m;
    // m[1] = 3;
    // m[5] = 2;
    // m[3] = 1;
    // m.insert({4, 7});
    // m[6];//if we donot set the value corressponding to keys then by default it set to the 0.
    // for(auto &ptr : m){
    //     cout<<ptr.first<<" "<<ptr.second<<endl;
    // }

    //---------------- Question solving on map-----------------------
    /* 
         Given N string, print unique strings in lexicographical order with their frequency
         N <= 10^5
         |S| <= 100
     */
    /* 
       Sol:-  we store all the string as a key in the map and if we find again the same key then increment the value of the corressponding key.
       when we insert the first key in the map and do not set any value coressponding to the key then by default it set to 0.
       so next time when we find the same key which we have already inserted in the map, the value at the key is 0 so increment those value.
     */

    map<string, int> m;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        m[s] = m[s]+1;
    }
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}