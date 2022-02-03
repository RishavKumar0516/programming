#include<stdio.h>
int removeElement(int* nums, int numsSize, int val){
    
    int i,k;
    for(i=0;i<numsSize;i++){
        if(nums[i]==val){
            //deletion
            for(k=i;k<numsSize-1;k++){
                nums[k]=nums[k+1];
            }
            numsSize--;
            i--;//we are decrementing i to again check at the same place, is same element occour again or not.
        }
    }
    return numsSize;
    
}
int main()
{
    int nums[]={0,1,2,2,3,0,4,2};
    int numsSize=sizeof(nums)/sizeof(int);
    int val;
    scanf("%d",&val);
    int size=removeElement( nums,  numsSize,  val);
    for(int i=0;i<size;i++){
        printf("%d",nums[i]);
    }
    printf("\n%d",size);

}