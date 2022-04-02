//To find the index of the 1st repeating element
/*Ex :
n = 5
Array elements : 1 2 3 2 4
Output : 1
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int c=0;
    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int k = 0 ; k < n ; k++)
    {
    for(int j = k+1 ; j < n ; j++)
    {
        if(arr[k] == arr[j])
        {
            printf("%d",k);
            c = 1; //To check whether repeating element is present or not
           goto end;
        }
    }
    }
    if(c == 0)
    {
        printf("No repeating element present.");
    }
    end :
    return 0;
    
}