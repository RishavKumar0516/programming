#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 bool findsubarr(int arr[],int n){
 int negativesum = 0;
        for(int i = 0; i < n ; i++){
            if(arr[i] == 0){
                return true;
            }
            if(arr[i] < 0){
                negativesum = negativesum + (arr[i]*(-1));
            }
        }
        cout<<negativesum<<endl;
        for(int i = 0; i < n; i++){
            if(negativesum == 0){
                return true;
            }
            if(arr[i] <= negativesum && arr[i] > 0){
                negativesum -=arr[i];
                cout<<"negativesum - "<<arr[i]<<" is "<< negativesum<<endl;
            }
        }
        return false;
 }
int main()
{
 int arr[5] = {4,2,-3,1,6};
 int n = 5;
 if(findsubarr(arr, n)){
     cout<<"true"<<endl;
 }else{
     cout<<"false"<<endl;
 }
return 0;
}