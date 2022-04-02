//TO PRINT THE DUPLICATE ELEMENTS OF AN ARRAY
/*
Test case 1: Enter number of elements in an array : 3
ORIGINAL ARRAY: 23 34 23 
DUPLICATE ELEMENTS IN ARRAY IS/ARE: 23 

Test case 2: Enter number of elements in an array : 4
ORIGINAL ARRAY:1 2 3 4
DUPLICATE ELEMENTS IN ARRAY IS/ARE:
NO DUPLICATE ELEMENTS FOUND.
*/
#include <stdio.h>
int main()
{
    int n,count;
    int check=0;
    printf("Enter number of elements in an array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nDUPLICATE ELEMENTS IN ARRAY IS/ARE:\n");
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count=1;
                check = 1;//To see if any duplicate element is present or not
            }
        }

        if(count!=0)
        printf("%d ",arr[i]);
    }
    if(check == 0)
    printf("NO DUPLICATE ELEMENTS FOUND.");
    return 0;
}