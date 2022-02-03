#include<iostream>
#include<string>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{

int numberOfString = 10;
int lengthOfEachstring =10;

  char **arr;
int i;
arr = malloc(numberOfString*sizeof(char*));
for (i = 0; i < numberOfString; i++)
    arr[i] = malloc(lengthOfEachstring*sizeof(char));
 
return 0;
}