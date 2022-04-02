
#include <stdio.h>
void main()
{
    char n;
   printf("Enter any character:");
   scanf("%c",&n);
   for (char i='A';i<=n;i++)
   {
       for (char j='A';j<=i;j++)
       {
           printf("%c",i);
       }
       printf("\n");
   }
}