#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
 /* structure  */
  struct student{
     char name[10];
     int roll;
     float marks[6]; 
 };

void printresult(struct student stud){

      char *sub[]={"math","science","sst","computer","GK","hindi"};
            
      cout<<"the name of student is "<<stud.name<<endl;
      cout<<"roll number : "<<stud.roll<<endl;
      for(int i=0;i<6;i++){

         cout<<"in subject  "<<sub[i]<<" marks obtained is : "<<stud.marks[i]<<endl;

      }
}
int main()
{
     struct student detail;
     cin>>detail.name;
     cin>>detail.roll;
     for(int i=0;i<6;i++){

         cin>>detail.marks[i];
     }
     printresult(detail);
 
return 0;
}