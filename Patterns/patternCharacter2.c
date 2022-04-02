
#include <stdio.h>
void main()
{
    char n;
   printf("Enter any character:");
   scanf("%c",&n);
   for(char i=n;i>='A';i--)
   {
       for(char j='A';j<=n;j++)
       {
       if(j<=i)
       printf("%c",j);
       else
       printf(" ");
       }
       int x=(int)n-(int)i;
       for(int j=1;j<x;j++)
       {
       printf(" ");
       }
       for(char k=i;k>='A';k--)
       {
           if(n==k)
           printf("");
           else
       printf("%c",k);
       }
       printf("\n");
   }

}