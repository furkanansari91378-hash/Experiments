Q. An array contains 10 elements. Given a number "x" that may occur several times in the array, perform the following tasks:
 a) Write a program to find the number of occurrences of "x" in the array, along with the position 
    of the first occurrence in the array.

   soln:

#include <stdio.h>

int main()
{
    int n, i, x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);
    int occindex=0;
    int count = 0;
    int position = 1;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            count++;

            if(occindex == -1)
            {
                position = i; 
               int occindex = i-1;
            }
        }
    }

    if(count > 0)
    {
        printf("Occurrence of %d = %d\n", x, count);
        printf("First occurrence position = %d\n", position);
        printf("The first index of occurence is:%d",occindex);
    }
    else
    {
        printf("%d is not present in the array.\n", x);
    }

    return 0;
}
