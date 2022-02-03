#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


 void input_func(){
     int n,k,value=0,index;
     scanf("%d %d", &n, &k);
     int A[n];
     for(int i=0; i<n; i++){
         scanf("%d", &A[i]);
     }
    
     int arr[32]={0};
     for(int j=0; j<n; j++){
         int num = A[j];
          index = 31;
         while(num > 0){
             int rem = num%2;
             arr[index] = arr[index]+rem;
             num=num/2;
             index--;

         }
     }

     /*for(int i=0;i<index;i++){
         printf("%d\n",arr[i]);
     }*/
     for(int i=0;i<32;i++){
         if(arr[i]%k ==0){
           value +=arr[i]/k;

         }else{
             value +=(arr[i]/k)+1;
         }
     }
     printf("%d",value);
 }
 
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
   input_func();
 }
 
return 0;
}