#include<iostream>
// #include<bits/stdc>
using namespace std;

/* global variable decleration here:- */

// int find_jump(int *arr, int length)     /* time complexity of these code is nlogn so we have to find the code of time complexity O(n) */
// {
//     int jump = 0;
//     int i = 0;
//     if (length <= 1)
//     {
//         return 0;
//     }
//     if (arr[0] == 0)
//     {
//         // cout << "-1" << endl;
//         return -1;
//     }
//     while (length > 0)
//     {
//         length = length - arr[i];
//         jump++;
//         i = i + arr[i];
//     }
//     // cout << jump << endl;
//     return jump;
// }

int maximum(int a, int b){
    return (a > b) ? a : b;
}

int find_jump(int *arr, int n){
    int maxreach = arr[0];
    int steps = arr[0];
    int jump = 1;
    if(n==1){
        return 0;
    }
    if(arr[0]==0) 
    return -1;

        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxreach = maximum(maxreach, i + arr[i]);
            steps--;
            if(steps == 0){
                jump++;
                if(i >= maxreach){
                    return -1;
                }
                steps = maxreach - i;
            }
        }
    return -1;
}

int main()
{
    int arr[11] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int length = 11-1;
    int k = find_jump(arr, length);
    return 0;
}