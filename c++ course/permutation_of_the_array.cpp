#include <iostream>
using namespace std;

/* global variable decleration here:- */
    void swap(int* arr, int id1,int id2){
        int temp = arr[id1];
        arr[id1] = arr[id2];
        arr[id2] = temp;
    }
    void print(int *arr, int size){
        // int size = sizeof(arr)/sizeof(int);
        for(int i=0;i<size ;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void print_permutation(int* arr, int counter, int size){
        // int size = sizeof(arr)/sizeof(int);
        if(counter == size ){
           print(arr, size);
           return;
        }
        for(int i=counter;i<size;i++){
             swap(arr,i,counter);
             print_permutation( arr, counter+1, size);
             swap(arr,i,counter);
        }
    }
     
int main()
{   int arr[3] = {1,2,3};
    int size = 3;
    print_permutation(arr, 0, size);
    return 0;
}