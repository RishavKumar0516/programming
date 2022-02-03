#include<iostream>
#include<fstream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
   ofstream hout("file.txt");
   string name;
   cin>>name;
   hout<<"My name is " + name;
   hout.close();/* these will close the file. It breaks the link of program with the files */

   ifstream hin("file2.txt");
   string content;
//    hin>>content;
   getline(hin, content);
   cout<<"The content of the file is "<<content<<endl;
   hin.close();
return 0;
}