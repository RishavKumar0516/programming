/* Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array. */


#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

int findMaximum(int arr[], int n) {
	    // code here
	    
	    int low = 0;
	    int high = n-1;
	    int mid;
	    
	    while(low <= high){
	        mid = (low+high)/2;
	        
	        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
	            return arr[mid];
	        }
	        if(arr[mid] < arr[mid+1]){
	            low = mid+1;
	        }
	        else{
	            high = mid-1;
	        }
	    }
}
 
int main()
{
    int n = 9;
    int arr[n] = {1,15,25,45,42,21,17,12,11};
    int max = findMaximum(arr, n);
    cout<<max<<endl;
 
return 0;
}