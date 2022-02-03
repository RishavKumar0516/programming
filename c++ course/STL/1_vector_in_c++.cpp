#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */
 void display(vector<int> &v){
     // vector is a datatype of, just like int, float, char. here we take reference of integer vector.
     for(int i = 0;i < v.size();i++){//v.size() retruns the size of vector array.
         cout<<v[i]<<" ";
         // we use vector same as array.
     }
     cout<<endl;
 }
template <class T>
 void display2(vector<T> &v){
          for(int i = 0;i < v.size();i++){//v.size() retruns the size of vector array.
         cout<<v[i]<<" ";
         // we use vector same as array.
     }
     cout<<endl;
 }
int main()
{
 vector <int> vec1;
 int element, size;
 cin>>size;
 for(int i = 0; i < size; i++){
     cout<<"Enter an element to add to this vector : ";
     cin>>element;
     vec1.push_back(element);//these insert the element in vector.
 }
 display(vec1);
  vec1.pop_back();//these delete the last element of the vector array.
  display(vec1);
  //we can insert the element at any specified position in the vector.But before using these method we have to create iterator.
  // iterator is an object pointer, using which we can iterate the array.
  vector<int>::iterator iter = vec1.begin();
  //we know that iterator is an pointer and we eant these iterator to point the first element of vector so we assign them to vec1.begin();
  vec1.insert(iter+1, 34);
  //iter+1 is pointing to the second elememt of vector(0 based indexing). so it will insert the element at second index.
  display(vec1);
  vec1.insert(iter+3, 72);//iter+3 is pointing to the forth elememt of vector(0 based indexing). so it will insert the element at forth index.
  display(vec1);
  vec1.insert(iter, 22);//iter is pointing to the first elememt of vector(0 based indexing). so it will insert the element at first index.
  display(vec1);
  vec1.insert(iter+2, 50, 566);//these will insert 566 50 times from where iter is pointing in the vector.
   display(vec1);
//  ways to create the vector:-
vector <char> vec2(4); // 4 element charactor vector.
display2(vec2);
vector <char> vec3(6, 3);//6-element vector of 3s.
display2(vec3);


return 0;
}