#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

    void printarray(int arr[], int N){
        for(int i = 0;i<N;i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;
    }

    void sort012(int a[], int n)
    {
        // coode here 
        //here we use count sort to sort the 0,1 and 2.
        
        int arr[3];
        for(int i = 0;i<3;i++){
            arr[i] = -1;
        }
        printarray(arr, 3);
        for(int i = 0; i < n;i++){
            int k = a[i];
            arr[k]++;
        }
                printarray(arr, 3);
        int i = 0;
        int j = 0;
        while(j < 3){
            if(arr[j] != -1){
                a[i] = j;
                arr[j] = arr[j] - 1;
                i++;
            }
            else{
                j++;
            }
        }
    }
 
int main()
{
 int N = 5;
 int arr[N]= {0, 2, 1, 2, 0};
 sort012(arr, N);
printarray(arr, N);
return 0;
}