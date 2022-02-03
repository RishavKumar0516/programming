#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 void readmat(int mat[2][3]){
     int i,j;
     for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             scanf("%d",&mat[i][j]);
         }
     }
 }



void printmat(int mat[2][3]){
       int i,j;
    for(int i=0;i<2;i++){    
        for(int j=0;j<3;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    } 
}

void marginals(int mat[][3],int n){
    int i,j,rowsum=0;
    for(i=0;i<n;i++){
        rowsum=0;
        for(j=0;j<3;j++){
            rowsum = rowsum+mat[i][j];
        }
        printf("%d\n",rowsum);
    }
}
 
int main()
{
int matrix[2][3];
readmat(matrix);
printmat(matrix);
marginals(matrix,2);
 
return 0;
}