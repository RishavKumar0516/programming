#include<iostream>
#include<map>
using namespace std;
 
/* global variable decleration here:- */

void display(map <string, int> &m){
  map <string, int>::iterator iter;
  for(iter = m.begin(); iter != m.end(); iter++){
     cout<<(*iter).first<<" "<<(*iter).second<<endl;//grabbing the key/value pair.
  }
}
 
int main()
{
 map <string , int> marksMap;
 marksMap["harry"] = 98;
 marksMap["jack"] = 59;
 marksMap["Rohan"] = 23;
 display(marksMap);
 // to insert multiple key value pairs in the map
 marksMap.insert({{"rishav", 96}, {"rahul", 45}});
 display(marksMap);
 //  to find the size of the map we use 
 cout<<"The size of the map is "<<marksMap.size()<<endl;
 cout<<"The maximun storable size of the map is "<<marksMap.max_size()<<endl;
 cout<<"The empty returns value  is "<<marksMap.empty()<<endl;

 return 0;
}