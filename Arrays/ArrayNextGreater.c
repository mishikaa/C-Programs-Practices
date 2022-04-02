//To print the next greater no. in an array

#include<stdio.h>

void nextGreater(int arr[],int n)
{
    int nextBigger[n];
    int k=0,t=0;
    nextBigger[k]=-1; //case if no bigger element present
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]<arr[j])
        {
            nextBigger[k]=arr[j];
            break;
        }
        }
        printf("Next bigger element of %d in the array is : %d\n",arr[i],nextBigger[k]);
        nextBigger[t]=nextBigger[k];
        k++;
        t++;
        nextBigger[k]=-1;

    }
    printf("Next Bigger Elements Array : \n"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",nextBigger[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
	
	int arr[n];
    printf("The given array is :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
	nextGreater(arr,n);
	return 0;
}
