//TO LEFT ROTATE AND RIGHT ROTATE ELEMENTS OF AN ARRAY AS PER THE USER'S CHOICE

#include <stdio.h>

int main()
{
    int n,temp;

    printf("ENTER NO. OF ELEMENTS: ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    char choice;
    printf("ENTER 'l' OR 'L' TO LEFT ROTATE ELEMENTS  AND 'r' OR 'R' FOR THE RIGHT ROTATE ELEMENTS OF AN ARRAY:");
    scanf(" %c",&choice);

    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    switch(choice)
    {
        case 'r':
        case 'R':
        printf("\nRIGHT ROTATE ELEMENTS:\n");
        for(int i=0;i<n;i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        break;
        case 'l':
        case 'L':
        printf("\nLEFT ROTATE ELEMENTS:\n");

        temp=arr[0];
        for(int j=0; j<n-1; j++)
        {
           arr[j]=arr[j+1];
		}
 
         arr[n-1]=temp;
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        break;
        default: printf("\nINVALID.");
    }
    return 0;
}