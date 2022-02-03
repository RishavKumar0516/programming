
/* sorting an array of element which contains 0s,1s and 2s. */

#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

void countsort(int* arr, int size){
    int greatest_element = 2;
    int c[3];
     for(int i=0;i<3;i++){
        c[i] = -1;  
    }
    for(int i=0;i<size;i++){
        c[arr[i]] = c[arr[i]] + 1;
    } 
    int j = 0, i=0;
    while(j < greatest_element+1){
          if(c[j] > -1){
              arr[i] = j;
              i++;
              c[j] = c[j]-1;
          }
          else{
              j++;
          }
    }
}

 
int main()
{
 int arr[5]={0,2,1,2,0};
 countsort(arr, 5);
 for(int i=0;i<5;i++){
     cout<<arr[i]<<endl;
 }
return 0;
}