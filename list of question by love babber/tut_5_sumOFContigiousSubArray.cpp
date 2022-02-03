#include<iostream>
#include<climits>
using namespace std;
 
/* global variable decleration here:- */

long long findsubseq(int* arr, int n){

    /* the algorithm which we are using to find the sum of sub sequence is called 'kadane's algorithm ' */
     long long sum = 0, maxsum = INT_MIN;
     for(int i=0;i<n;i++){
         sum +=arr[i];
         if(maxsum < sum){
             maxsum = sum;
         }
         if(sum < 0){
             sum = 0;
         }
     }

    return maxsum;
}
 
int main()
{
 int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
 int size = 8;
 int length = findsubseq(arr, size);
 cout<<"the length of the contigious subsequence is "<<length<<endl;
return 0;
}