//Matrix transpose

#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter the dimension n:\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        
        }
    }
    printf("\nTRANSPOSE OF A MATRIX :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}