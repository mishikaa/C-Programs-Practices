
#include <stdio.h>
void main()
{
    int n;
   printf("Enter number of rows:");
   scanf("%d",&n); 

   for(int i = 1 ; i <= (2 * n - 1) ; i+=2 )
   {
       for(int j = i ; j <= (2*n-1) ; j += 2 )
       {
           printf("%d",j);
       }
       printf("\n");
   }
}