#include<iostream>
#include<fstream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
    /* these will write the str string inside the file which we are opening. so these will write in the file */
   string str = "Rishav Bhai";
   ofstream out("file.txt");
   out<<str; 

   string str2;
   ifstream in("file2.txt");
//    in>>str2;
   cout<<str2<<endl;
   getline(in, str2);
   cout<<str2;



return 0;
}