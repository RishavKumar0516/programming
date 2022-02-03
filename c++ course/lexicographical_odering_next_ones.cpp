#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* algorithm for printing number in lexicographical order
step1: find the largest X such that p[X] < p[X+1]. (if there is nosuch X, then p is the last permutation.)
step 2: find the largest y such that p[X] < p[Y].
step 3: swap p[X] and p[Y].
step 4: reverse the p[X+1...N]. */

/* global variable decleration here:- */

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
/* if  we have to find the permutation just next to the given number then traverse the array from left side. */
int main()
{
    int arr[3] = {1,2,3};
    int n = 3;
    /* step--1  finding the largestX such that p[X]<p[X+1] */
    int largestX = -1;
    for (int i = 0;i<n-1;i++)
    {
        if(arr[i] < arr[i+1])
        largestX = i;
    }
        if (largestX == -1)
        {
            cout << "there is no such other permutation other then the given array" << endl;
            exit(1);
        }
    

        /* step--2  finding the largestY such that p[X] < p[Y] */
        int largestY = -1;
        for (int j = 0;j<n;j++)
        {
            if(largestY != -1){//if we find the first greater element then break the loop.
                break;
            }
            if (arr[largestX] < arr[j])
            {
                largestY = j;
            }
        }

        /* step 3 : swap the element persent at the index largestX and the largestY. */
        swap(&arr[largestX], &arr[largestY]);

        /*step 4 : reverse the array from the index largestX till to the end. */
        cout << "the array before reverse is" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
        reverse(arr, largestX + 1, n - 1);

        /* printing the array */
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }

        return 0;
    }