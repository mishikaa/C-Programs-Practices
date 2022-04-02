//TO MULTIPLY TWO MATRICES USING MULTI-DIMENSIONAL ARRAYS.
#include <stdio.h>
int row1,col1,row2,col2;
void input(int ar1[][col1],int ar2[][col2])
{
    printf("ENTER 1ST MATRIX :\n");
for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
        scanf("%d",&ar1[i][j]);
        }
    }
    printf("ENTER 2ND MATRIX :\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
        scanf("%d",&ar2[i][j]);
        }
    }
}
void multiply(int ar1[][col1],int ar2[][col2],int prod[][col2])
{
    
    
     for (int i = 0; i <row1; i++) 
    {
        for (int j =0; j <col2; j++) 
        {
            *(*(prod+i)+j)=0;
        for (int k = 0; k < col1; k++) 
        {
        *(*(prod+i)+j) = *(*(prod+i)+j) + ar1[i][k] * ar2[k][j];
        }
        }
    }
}
void display(int prod[][col2])
{
    printf("\nMULTIPLICATION MATRIX:\n");
    for(int i = 0 ;i < row1; i++)
    {
        for(int j=0;j<col2;j++)
        {
        printf("%2d ",*(*(prod+i)+j));
        }
        printf("\n");
    }
}
int main()
{
    printf("ENTER NUMBER ROWS AND COLUMNS FOR BOTH THE MATRICES RESPECTIVELY:\n");
    scanf("%d %d %d %d",&row1,&col1,&row2,&col2);
    if(col1!=row2)
    {
        printf("MULTIPLICATION NOT POSSIBLE.");
        goto end;
    }
    else
    {
    int arr1[row1][col1];
    int arr2[row2][col2];
    int prod[row1][col2];
    input(arr1,arr2);
    multiply(arr1,arr2,prod);
    display(prod);
    }
    end:
    return 0;
}