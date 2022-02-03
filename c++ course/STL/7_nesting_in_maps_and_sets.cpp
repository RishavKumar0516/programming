#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* 
 The key/value pair which is inserted in map on the basis of comparision. because we know that map stores key in sorted order.
 Any data structure which is comparable, is stored in map.
 ex- pairs, sets, vector etc.
 */
 
int main()
{
 /*map<pair<int, int>, int> m;
 pair<int, int>p1, p2;
 p1 = {1,2};
 p2 = {2,3};
 cout<<(p1 < p2)<<endl; //p1 < p2 because first element of p1 < p2.
 p1 = {2,2};
 p2 = {2,3};
 cout<<(p1 > p2)<<endl;// first element of p1 == p2 and second element of p1 < p2.thesefore p2 > p1.

 /* so when we store pairs in map then the pair is compared with the alredy stored pair in map. */

 /*
 map <set<int>, int> m2;
 set<int> s1 = {1,2,3};
 set<int> s2 = {2, 3};
 cout<<"comparision for set "<<(s1 < s2)<<endl;// s2 > s1 because first element of set1 < set2 thesefore their is no need to compare for another element of sets.
 */

/* pairs as key and vector as value */
/*
   map < pair<string, string>, vector<int> > m;
   // consider we are given first name, last name  and coressponding to name some marks are given.  so we have 5 student and their marks are given we store them in map.

   int n;  //  number of student.
   cin>>n;
   for(int i= 0;i<n;i++){
       string firstname, lastname;
       int count;  // number of subject.
       cin>>firstname>>lastname>>count;
       for(int j =0; j <count;j++){
           int x; 
           cin>>x;
           //insetion in map : key is the pair of firstname and lastname and values are vector.
            m[{firstname, lastname}].push_back(x);   

       }

   }
   for(auto &pr : m){
       auto &fullname = pr.first;   //this is list
       auto &numberlist = pr.second;  // this is vector
       cout<<"Name : "<<fullname.first<<" "<<fullname.second<<endl;    
       cout<<"marks : ";
       for(int i = 0; i < numberlist.size(); i++){
           cout<<numberlist[i]<<" ";
       }
       cout<<"\n";
   }
   */


/* 
  Trying a question from hackerrank
  monk is a multi-talented person, and prepares result for his college in his free time.(Yea, he is still in love with his old college) He gets alist of students with their marks. the maximum marks whichcan be obtained in the exam is 100.
  the monk is supposed to arrange the list in such a manner that the list is sorted in decresing order of marks, they should be arranged in lexicographically order.
  Help monk prepare the same!
  INPUT FORMAT:
  on the first line of the standered input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer denoting the name of student and marks.
  OUTPUT:
  you must print required list.


 */
//we solve this quesion by map.
//  sol: we use numbers as key for storing in sorted order and use vector string to store name, because two student can have same marks.
/*
  map<int, multiset<string> > marks_map;
int n;
cin>>n;
for(int i = 0; i< n;++i){
    int marks;
    string name;
    cin>>name>>marks;
    marks_map[marks].insert(name);//this  marks_map[marks] becomes set.
}
 auto curr_it = --marks_map.end();
 while(true){
     auto &students = (*curr_it).second;  // grabbing sets value
     int marks = (*curr_it).first;        //grabbing keys
     for(auto student : students){
         cout<<student<<" "<<marks<<endl;
     }
     if(curr_it == marks_map.begin()){
         break;
     }
     else{
         curr_it--;   
     }
 }
*/

/*  or we can make the above code more clean */

  map<int, multiset<string> > marks_map;
int n;
cin>>n;
for(int i = 0; i< n;++i){
    int marks;
    string name;
    cin>>name>>marks;
    marks_map[-1 * marks].insert(name);//this  marks_map[marks] becomes set.
}
 auto curr_it = --marks_map.end();
  for(auto &marks_student_pr : marks_map){
     auto &students = (*curr_it).second;  // grabbing sets value
     int marks = (*curr_it).first;        //grabbing keys
     for(auto student : students){
         cout<<student<<" "<<-1 * marks<<endl;
     }
 }

return 0;
}