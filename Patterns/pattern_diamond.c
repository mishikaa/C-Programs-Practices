/*DIAMOND PATTERN
Enter any number:5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <stdio.h>
int main()
{
    int n,x=1;
   printf("Enter any number:");
   scanf("%d",&n);

   for ( int i = 1 ; i <= ((2*n) - 1 ) ; i++ ) //For number of rows
   {

       //to print the upper half of diamond
       if ( i <= n)
       {

       for ( int j = n-i ; j >= 1 ; j-- ) //For printing the spaces in upper half
       {
           printf(" ");
       }

       for(int k = 1 ; k <= x ; k++) 
       {
           printf("*");
       }

       printf("\n");

       x+=2;
       if(i==n)
       x-=2;

       }
       //to print the lower half of diamond 
       else
       {
           x=x-2;
           for(int j = i-n ; j >= 1 ; j--)
       {
           printf(" "); //For printing the spaces in upper half
       }
       for(int k = 1 ; k <= x ; k++ )
       {
           printf("*");
       }
       printf("\n");
       }
       }
       return 0;
   }
       
   
