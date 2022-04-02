//90 degree anticlockwise rotation

#include <stdio.h>

void print_matrix(int n,int mat[][n]);
void rotate(int n,int mat[][n]);

int main()
{
   int n;
    printf("Enter the dimension n:\n");
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

    rotate(n,mat);
return 0;
}

  void rotate(int n,int mat[][n])
  {
      int rotate[n][n];
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        rotate[n-j-1][i]=mat[i][j]; //USING THE INDICES OF RESPECTIVE ELEMENTS
        }
    }

    printf("Matrix after 90 degrees anti-clockwise rotation:\n");
    print_matrix(n,rotate);

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
