
#include<stdio.h>
void inputArray(int *arr1,int *arr2,int n);
void printArray(int *arr1,int *arr2,int n);
void swapArray(int *arr1,int *arr2,int n);

void inputArray(int *arr1,int *arr2,int n) //This function is to input the elements in each array
{
    printf("Enter elements in 1st array :");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]); //Inputting values in 1st array
    }

    printf("Enter elements in 2nd array :");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);//Inputting values in 2nd array
    }

    printf("Input : \n");
    printArray(arr1,arr2,n); //To print the original array
}

void printArray(int *arr1,int *arr2,int n) //This function is used to print the arrays
{

    printf("First array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]); //To print the 1st array
    }

    printf("\nSecond array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]); //To print the 1st array
    }
}

void swapArray(int *arr1,int *arr2,int n)
{
    
 for ( int i = 0; i < n; i++ )
    {
        int temp = arr1[i]; /*Swapping the elements of 1st array with the 2nd one*/
        arr1[i] = arr2[i];    
        arr2[i] = temp;
    }

printf("\nOutput : \n");
printArray(arr1,arr2,n);
}
int main()
{
    int n;
    printf("Enter the number of elements in both the arrays :");
    scanf("%d",&n); //Assuming both arrays are of same size
    int arr1[n];
    int arr2[n];
    inputArray(arr1,arr2,n); //Calling function inputArray() 
    swapArray(arr1,arr2,n); //Calling function swapArray() 
    return 0;
}