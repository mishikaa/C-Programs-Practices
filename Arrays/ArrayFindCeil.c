//PROGRAM TO FIND THE CEILING IN A SORTED ARRAY

#include<stdio.h>

    void printarray(int *arr,int n);
    int Findceil(int *arr,int n,int ceil);

int main()
{  
    int n;
    
    printf("Input :\n");
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    printf("\nEnter elements in array : ");
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    
     printf("Find the ceiling of : ");
     int num;
     scanf("%d",&num);

     int ans = Findceil(arr,n,num); 
    
     printf("Output :\n");
     printf("The given array is : ");
     printarray(arr,n);
     
     printf("\nThe ceiling of %d is : %d",num,ans);

    return 0;
}

    int Findceil(int *arr , int n , int num)
    {
        for(int i=0;i<n;i++)
        {
            if(*(arr+i)>=num) //Check if array element is greater than or equal to num 
            {
                return *(arr+i);
            }
            
        }
    }  

    void printarray(int *arr,int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
