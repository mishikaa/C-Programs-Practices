//TO FIND THE POSSIBLE PAIRS IN AN ARRAY WITH A PARTICULAR SUM

#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");
 for(int i=0;i<n;i++) //Inputting array elements
 {
 scanf("%d",&arr[i]);
 }
    
 printf("Enter the SUM x:\n");
 scanf("%d",&x);
    
  int count=0; //This counter is to check whether such pair exists or not
    
    printf("Output:");
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
         
         if(arr[i]+arr[j]==x)
         {
            printf("%d,%d\n",arr[i],arr[j]);
            count++;
         }
         }
     }
     if(count==0)
     {
         printf("-1\nNo valid pair exists.");
     }
     
    return 0;
}
