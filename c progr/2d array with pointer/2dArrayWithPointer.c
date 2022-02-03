#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
int main()
{
 /* matrix is an 2d array, matrix is an array of pointers and each pointer is going to point the array of integers. */

 /* matrix will point to an array of pointers and each of these pointer will point to different array of integers. */

 /* allocating the memory for the array of pointer(3 pointer variable. here we are creating array of 3 integer pointer and each pointer is going to point the array of integers.) */
int **matrix = (int**)malloc(3*sizeof(int*));

for(int i=0;i<3;i++){

    /*allocating the memory for the array of integers where each array is goona pointed by integer pointers. */
    *(matrix + i) =(int*)malloc(4* sizeof(int));
    /* or
    matrix[i] = (int*)malloc(4* sizeof(int));   */
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        scanf("%d",(*(matrix + i) + j));
        /* or
                 scanf("%d",&matrix[i][j]);
                 */
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d",*(*(matrix + i) + j));
    }
    printf("\n");   
}

/* new type decleration of the arrays */

int *mat[5];  //array of pointers.
/* these decleration means, mat is an array of pointers of size 5, and each pointer is going to point the array of integers */

 for(int i=0;i<5;i++){
     mat[i] = (int*)malloc(3 * sizeof(int));
 }
 
 for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        scanf("%d",(*(mat + i) + j));
    }
 }

 for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%d",*(*(mat + i) + j));
    }
    printf("\n");
 }
return 0;
}