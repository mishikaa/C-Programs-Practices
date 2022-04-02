//Pyramid Pattern 

#include <stdio.h>
void main()
{
    int n;
   printf("Enter number of rows:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int k=n-i;k>=1;k--)
       {
          printf(" ");
       }
       for(int j=1;j<=i;j++)
       {
          printf("%d ",j);
       }
       printf("\n");
   }
}