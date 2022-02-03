#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
int main()
{
 
int n,k,count = 0;
scanf("%d %d",&n,&k);
 int A[n];
 for(int i=0;i<n;i++){
     scanf("%d",&A[i]);
 }


 int totalzero = 0;
 int numofzero;
 while(totalzero != n-1){
     numofzero = 0;
     int p=0;
     p+=totalzero;
     k+=totalzero;
     int i=p;
    while(i<k && k<n){   
         int s=pow(2,p);
         A[i]=A[i]^s;
         if(A[i]==0){
             numofzero++;
         }
     }
     count++;
     totalzero+=numofzero;    

 }
 /*printf("%d\n",count);
  for(int i=0;i<n;i++){
     printf("%d\n",A[i]);
 }*/
 
return 0;
}