
#include <stdio.h>
void main()
{
    int m,n;
   printf("Enter number of rows and columns:");
   scanf("%d %d",&m,&n);
   for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(i==1||i==m||j==1||j==n)
           printf("*");
           else
           printf(" ");
       }
       printf("\n");
   }
}