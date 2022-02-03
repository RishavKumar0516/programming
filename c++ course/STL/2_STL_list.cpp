#include<iostream>
#include<list>
using namespace std;
 
/* global variable decleration here:- */

void display(list<int> &l){
    list<int>::iterator itr;
    for( itr = l.begin(); itr != l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
 
int main()
{
   list<int> list1;//list of length 0.
   //list<int> list2(7);//Empty list of length 7.
   list1.push_back(5);
   list1.push_back(3);
   list1.push_back(4);
   list1.push_back(8);
   list1.push_back(10);

   // Now we create an iterator
   list<int>::iterator iter;
   iter = list1.begin();//iter is pointing the first node of the list.
   cout<<*iter<<" ";
   iter++;
   cout<<*iter<<" "<<endl;
   display(list1);
   list <int> list2(3);
   list <int> :: iterator iter2;
   iter2 = list2.begin();
   *iter2 = 45;
   iter2++;
   *iter2 = 16;
   iter2++;
   *iter2 = 9;
   iter2++;
   display(list2);

   //poping th node of the list
   list1.pop_back();//delete the element from the end of the list.
   display(list1);
   list1.pop_front();//delete the element from the front of the list.
   display(list1);
   list1.remove(4);//removes the all occurance of the value from the list.
   display(list1);
   list1.sort();//sort the list.
   display(list1);
   list1.merge(list2);//merge the list2 in list1.
   cout<<"list after merging"<<endl;
   display(list1);
   list1.reverse();
   display(list1);

return 0;
}
