//TO FIND THE FREQUENCY OF EACH ELEMENT OF AN ARRAY

#include <stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int fr[n];
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=1;
     for(int j=i+1;j<n;j++)
     {
         if(arr[i]==arr[j])
         {
             count++;
             fr[j]=0;
         }
     }
     if(fr[i]!=0)
     {
        fr[i]=count;
     }
    }
    printf("\nFREQUENCY OF EACH ELEMENT:\n");
    for(int i=0;i<n;i++)
    {
        if(fr[i]!=0)
    printf("%d occurs %d times.\n",arr[i],fr[i]);
    }
    return 0;
}
