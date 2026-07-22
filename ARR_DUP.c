Q. An array contains 10 elements. Given a number "x" that may occur several times in the array, perform the following tasks:
 a) Write a program to find the number of occurrences of "x" in the array, along with the position 
    of the first occurrence in the array.

   soln:
#include<stdio.h> 
int main(){ 
 int n, targ, count=0, occ=-1; 
 printf("Enter the number of elements in an array: "); 
 scanf("%d", &n); 
 
 int arr[n]; 
 for(int i=0;i<n;i++){ 
 printf("Enter number %d: ", (i+1)); 
 scanf("%d", &arr[i]); 
 } 
 printf("Enter target element: "); 
 scanf("%d", &targ); 
 for(int i=0;i<n;i++){ 
 if(targ == arr[i]){ 
 count++; 
 if(occ<0){ 
 occ = i+1; 
 } 
 } 
 
 } 
 if(count>1){ 
 printf("The element %d is repeated %d times.\n", targ, count); 
 printf("The first occurence is at position %d.\n", occ); 
 } 
 else{ 
 printf("Element is not repeated"); 
 } 
 return 0; 
} 


