//TO DETERMINE WHETHER A MATRIX ENTERED BY USER IS AN IDENTITY MATRIX

#include <stdio.h>
int main()
{
    int row,col;
    int check=1;
    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&row,&col);
    if(row!=col)
    {
        printf("IT IS NOT AN IDENTITY MATRIX."); //As identity matrices are always square matrices
    }
    else //If matrix is a square matrix
    {

    int arr[row][col];
    printf("Enter the elements in the matrix :\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        scanf("%d",&arr[i][j]); //Inputting elements in the matrix
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
            if(i==j && arr[i][j]!=1)
            {
                check=0;
                break;
            }
             else if (i!=j && arr[i][j]!=0)
             {
                check=0;
                break;
             }

        }
    }

    if(check==1)
    {
        printf("IT IS AN IDENTITY MATRIX.");
    }
    else
    {
         printf("IT IS NOT AN IDENTITY MATRIX.");
    }
    }//end of outer else
    
    return 0;
}