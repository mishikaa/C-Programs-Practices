
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("Enter the SUM x:\n");
 scanf("%d",&x);
 for(int i=0;i<n-1;i++)
 {
     if(arr[i]+arr[i+1]==x)
     {
         printf("%d,%d\n",arr[i],arr[i+1]);
     }
 }
 return 0;
}