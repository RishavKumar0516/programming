#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
/* global variable decleration here:- */

// file input and output using open() and eof() function.
 
int main()
{
 ofstream out;
 out.open("file2.txt");
 out<<"Hey, I am searching for the guy How looks somewhat like jk.";
 out<<"Please help me for searching these guy, who is accused of  annoying the children.";
 out<<"if anybody finds them please call on: 234567234";  
 out.close();

 ifstream in;   
 string str1, str2;
 in.open("file2.txt");
 in>>str1>>str2;
 cout<<str1;
 while(in.eof() == 0){
     getline(in, str2);
     cout<<str2<<endl;
 }
 in.close();
return 0;     
}