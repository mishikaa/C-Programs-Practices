//TO REVERSE ELEMENTS OF AN ARRAY
#include <stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
       temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
    }
    printf("\nARRAY IN REVERSE ORDER:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}