#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 void check_denomination(){
   int n;
   scanf("%d",&n);
   int notes[n];
   for(int i=0;i<n;i++){
       scanf("%d",&notes[i]);
   }
   int min = INT_MAX;
   int max = INT_MIN;
   int max_index = 0;

   for(int i=0;i<n;i++){
       if(notes[i]>max){
           max = notes[i];
           max_index = i;
       }
       if(notes[i]<min){
           min = notes[i];
       }
   }
   notes[max_index] = min;
   int sum = 0;
   for(int i=0;i<n;i++){
       sum = sum + notes[i]/min;
   }
   printf("%d\n",sum);
 }
 
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
check_denomination();
 }
 
return 0;
}