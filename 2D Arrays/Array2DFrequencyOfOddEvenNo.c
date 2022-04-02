// TO FIND THE FREQUENCY OF ODD & EVEN NUMBERS IN THE GIVEN MATRIX
/*
Enter the number of rows and columns:
3 3
Enter the elements in the matrix :
1 2 3 4 5 6 7 8 9   
ORIGINAL ARRAY:
1 2 3 
4 5 6 
7 8 9 

FREQUENCY OF EVEN NUMBERS IN THE MATRIX = 4
FREQUENCY OF ODD NUMBERS IN THE MATRIX = 5
*/
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