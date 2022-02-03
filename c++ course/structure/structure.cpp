#include<iostream>
using namespace std;
struct employee{
    int eId;
    char favchar;
    float salary;
};

/* typedef in c++ */

typedef struct student_information{
  char Name[10];
  int roll_no;
  float student_fee;
}stud;

int main(){
   struct employee rishav;
   rishav.eId=86;
   rishav.favchar='k';
   rishav.salary=60000;
   cout<<"rishav.eId ="<<rishav.eId<<endl; 
   cout<<"rishav.favchar ="<<rishav.favchar<<endl; 
   cout<<"rishav.salary ="<<rishav.salary<<endl; 
   stud info;
  
   info.roll_no=86;
   info.student_fee=3000.00;
   cout<<info.Name<<endl;
   cout<<info.roll_no<<endl;
   cout<<info.student_fee<<endl;


   /* typedef in c++ */
return 0;
}