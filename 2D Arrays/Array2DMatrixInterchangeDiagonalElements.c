//INTERCHANGE THE DIAGONAL ELEMENTS

#include<stdio.h>
void print_matrix(int n,int mat[][n]);
void interchange_diag(int n,int mat[][n]);

int main()
{
    int n;
    printf("Enter the dimension n of a square matrix :\n");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }

    printf("Original matrix:\n");
    print_matrix(n,mat);

    interchange_diag(n,mat);

    return 0;
}

void interchange_diag(int n,int mat[][n])
{
    int temp;
  		for(int i = 0; i < n; i++)
  		{
  			temp = mat[i][i];
  			mat[i][i] = mat[i][n-i-1];
  			mat[i][n-i-1] = temp;
	   	}		
printf("Matrix after interchanging the diagonal:\n");
    print_matrix(n,mat);

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
