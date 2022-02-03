#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

int Duplicate(int* arr, int n){
    //if you are going to initialize the array inside the function then initialize it using heap, because after function returns the stack memory erased and array itself also erased. but heap memory is remains until you free it.
    int* temp = (int*)malloc( n+1 * sizeof(int));
    int counter = 0;
    /* initialize the every element to the 0. */
    for(int i =0;i< n+1;i++){ 
        temp[i] = 0;
    }
    for(int i = 0; i < n ;i++){
        temp[arr[i]]+=1;
    }
    for(int i = 0; i<n;i++){
        if(temp[i] == 2){
            counter = i;
        }
    }
    return counter;//always return the value from the end of the function body. if you return the value in the intermediate of the function then we get the error message like " control reach to the non void function "
}
 
int main()
{
  int arr[5] = {3,1,3,4,2};
  int n = 5;
  int k = Duplicate(arr, n);
  cout<<k<<endl;
return 0;
}