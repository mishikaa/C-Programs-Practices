//TO ARRANGE THE ELEMENTS OF ARRAY IN ASCENDING AND DESCENDING ORDER AS PER THE USER'S CHOICE
#include <stdio.h>
void print(int ar[],int n);
int main()
{
    int n;
    printf("ENTER NO. OF ELEMENTS: ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    char choice;
    printf("ENTER 'A' OR 'a' TO ARRANGE IN ASCENDING ORDER AND 'd' OR 'D' FOR DESCENDING ORDER : ");
    scanf(" %c",&choice);

    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int counter=1,temp;

    switch(choice)
    {
        case 'a':
        case 'A':
    printf("\nIN ASCENDING ORDER:\n");
        while(counter<n-1)
        {
         for(int i=0;i<n-counter;i++)
         {
             if(arr[i]>arr[i+1])
             {
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
         }
         counter++;
        }
        print(arr,n);
        break;
        case 'd':
        case'D':
        printf("\nIN DESCENDING ORDER:\n");
        while(counter<n-1)
        {
         for(int i=0;i<n-counter;i++)
         {
             if(arr[i]<arr[i+1])
             {
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
         }
         counter++;
        }
        print(arr,n);
        break;
        default:printf("\nINVALID");
    }
    return 0;
}
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
