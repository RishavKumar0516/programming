#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
 long int findgcd(long int a, long int b){
     int temp;
     if(a<b){
         temp = a;
         a=b;
         b= temp;         
     }
     while(b != 0){
         temp =a%b;
         a = b;
         b= temp;
     }
     return a;
 }

 long int min(long int a, long int b){
     if(a<b)
     return a;
     else return b;
 }

int main()
{
 long int t,n;
 scanf("%ld",&t);
 while(t--){
     scanf("%ld",&n);
     long int arr[n],sum =0;
     for(int i=0;i<n;i++){
         scanf("%ld",&arr[i]);
         sum+=arr[i];
     }
     if(n==1){
         printf("1\n");
         continue;
     }

     long int pref[n],suff[n];
     pref[0] =arr[0];
     for(int i=1;i<n;i++){
         pref[i] = findgcd(pref[i-1], arr[i]);
     }

     suff[n-1] =arr[n-1];
     for(int i=n-2; i>=0; i--){
         suff[i] = findgcd(pref[i+1], arr[i]);
     }
     long int ans = sum/pref[n-1];

     for(int i=0;i<n;i++){
         long int k = findgcd((i-1 < 0? 0: pref[i-1]),(i+1 >= n? 0:suff[i+1]));
         ans = min(ans,1+(sum-arr[i])/k);
     }
     printf("%ld\n",ans);

 }

 
 
return 0;
}