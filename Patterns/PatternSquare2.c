/*Unique Square pattern
Enter number of rows:5
1234554321
1234**4321
123****321
12******21
1********1*/
#include <stdio.h>
void main()
{
    int n;
   printf("Enter number of rows:");
   scanf("%d",&n);
   
   for( int i = n ; i >= 1 ; i-- )
   {
       for( int j = 1 ; j <= n ; j++ )
       {
       
       if( j <= i )
       printf("%d",j);
       
       else
       printf("*");
       
       }
       
       for(int j=1;j<=n-i;j++)
       {
       printf("*");
       }
       
       for(int k=i;k>=1;k--)
       {
       printf("%d",k);
       }
       printf("\n");
   }//end of outermost for

}