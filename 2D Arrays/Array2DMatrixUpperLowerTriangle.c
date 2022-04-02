//UPPER TRIANGULAR AND LOWER TRIANGULAR MATRIX ELEMENTS


#include<stdio.h>
int n;

void print_matrix(int n,int mat[][n]);
void Upper_triangle(int arr[][n]);
void Lower_triangle(int arr[][n]);

int main()
{

    printf("Enter the dimension n:\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }

    printf("Original matrix:\n");
    print_matrix(n,arr);

    printf("\nUpper triangular elements are:\n");
    Upper_triangle(arr);
    printf("\nLower triangular elements are:\n");
    Lower_triangle(arr);

    return 0;
}
void Upper_triangle(int arr[][n])
{
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {  
            if(i<j)
            {
             printf("%d\n",arr[i][j]);
            }  

        }
    }
}
void Lower_triangle(int arr[][n])
{
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {  
            if(i>j)
            {
             printf("%d\n",arr[i][j]);
            }  

        }
    }
}
//Function to print the matrix
void print_matrix(int n,int mat[][n])
{
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
    printf("%d ",mat[i][j]);
    }
    printf("\n");
    }    
}
