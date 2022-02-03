#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
 int maximum_suffle(int *arr, int n){
     int even_in_array =0;
     int odd_in_array =0;
     int even_in_i = n/2;
     int odd_in_i =n/2 + n%2;

     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             even_in_array++;
         }
         else{
             odd_in_array++;
         }
     }

     int x=0;
     if(even_in_array - odd_in_i > 0){
         x = even_in_array - odd_in_i;
     }
     if(odd_in_array - even_in_i > 0){
         x = odd_in_array - even_in_i;
     }
     return (n-x);
 }

int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }

     int max = maximum_suffle(arr,n);
     printf("%d\n",max);
 }

 
 
return 0;
}