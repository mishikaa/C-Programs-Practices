/*Decreasing character pattern
Enter any CHARACTER:E
EDCBA
 DCBA
  CBA
   BA
    A
*/
#include <stdio.h>

void main()
{
    char n;
   printf("Enter any CHARACTER:");
   scanf("%c",&n);

   for(char i=n;i>='A';i--)
   {

       for(int j=1;j<=(int)(n-i);j++)
       {
       printf(" "); //For spacing
       }
    
       for(char k=i;k>='A';k--)
       {
       printf("%c",k);
       }
    
       printf("\n");
   }
}