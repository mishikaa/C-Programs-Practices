// TO FIND THE FREQUENCY OF ODD & EVEN NUMBERS IN THE GIVEN MATRIX

#include <stdio.h>
int main()
{
    int row,col;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&row,&col);

    int even=0,odd=0;
    int arr[row][col];

    printf("Enter the elements in the matrix :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }

    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("\nFREQUENCY OF EVEN NUMBERS IN THE MATRIX = %d",even);
    printf("\nFREQUENCY OF ODD NUMBERS IN THE MATRIX = %d",odd);
    return 0;
}