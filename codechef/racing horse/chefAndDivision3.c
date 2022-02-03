#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int createcontest(){
    int n,k,d,sum =0;
     scanf("%d %d %d",&n, &k, &d);

     int A[n];
     for(int i=0;i<n;i++){
         scanf("%d",&A[i]);
     }
     for(int i=0;i<n;i++){
         sum += A[i];
     }
     if(sum < k){
         return 0;
     }
     int numberOfContest = sum/k;
     if(numberOfContest < d){
         return numberOfContest;
     }
     else{
         return d;
     }
 }
 
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
    printf("%d\n",createcontest());
 }
return 0;
}