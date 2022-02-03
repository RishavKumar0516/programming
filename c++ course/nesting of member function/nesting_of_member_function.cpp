#include<iostream>
#include<string>
using namespace std;
 
/* global variable decleration here:- */

/* In structure members are public and no methods are placed inside the structure. */

/* classes have methods and properties, class can make few members as private and few member as public. */

/* you can declare objects along with class decleration */

// class Employee{

//     // class defination.
//     private:
//       int a,b;
//     public:
//       int c,d;
// }harsh,rohan,lovish;   //object declaration.

// class binary{

// /* by default the member or property of class is private. if you do not identify the public and private inside the class then by default those members are private. so here string s is not identified, by default it is private variable. */
//     string s;

//     public:
       
//        void read(void);
//        void chk_bin(void);                                         
//        void ones(void);                                                                 
//        void display(void);

// };


// /* every function accessing the private variable. */
// void binary::read(void){
//     cout<<"Enter a binary number"<<endl;
//     cin>>s;
// }
// void binary::chk_bin(void){
//     for(int i=0;i< s.length();i++){
//         if(s.at(i) != '0' && s.at(i) != '1'){
//             cout<<"Incorrect binary format "<<endl;
//              exit(0);
//         }
//     }
//     cout<<"correct binary format"<<endl;

// }
// void binary::ones(void){
//     for(int i=0;i<s.length();i++){
//         if(s.at(i)=='0'){
//             s.at(i) = 1;
//         }
//         else{
//             s.at(i) = 0;
//         }
//     }
// }

// void binary::display(void){
//     for(int i=0;i<s.length();i++){
//         cout<<s.at(i);

//     }
// }
 
// int main()
// {
//   binary b;/* b is a object of class binary. */  
//   b.read();
//   b.chk_bin();
//   b.ones();
//   b.display();
 
// return 0;
// }

/* -----------------nesting of the function---------------------- */

 class binary{

 /* by default the member or property of class is private. if you do not identify the public and private inside the class then by default those members are private. so here string s and function chk_bin is not identified, by default it is private variable. */
     string s;
    void chk_bin(void); 

     public:
       
        void read(void);                                        
        void ones(void);                                                                 
        void display(void);

 };


 /* every function accessing the private variable. */
 void binary::read(void){
     cout<<"Enter a binary number"<<endl;
     cin>>s;
 }
 void binary::chk_bin(void){
     for(int i=0;i< s.length();i++){
         if(s.at(i) != '0' && s.at(i) != '1'){
             cout<<"Incorrect binary format "<<endl;
              exit(0);
         }
     }
     cout<<"correct binary format"<<endl;

 }
 void binary::ones(void){

      chk_bin();/* when calling a function inside of other function then we don't need to write the dot operator with the object name followed by function name inside main function.  */

     for(int i=0;i<s.length();i++){
         if(s.at(i)=='0'){
             s.at(i) = 1;
         }
         else{
             s.at(i) = 0;
         }
     }
 }

 void binary::display(void){
     for(int i=0;i<s.length();i++){
         cout<<s.at(i);
     }
 }
 
 int main()
 {
   binary b;/* b is a object of class binary. */  
   b.read();
   b.ones();
   b.display();
 
 return 0;
 }