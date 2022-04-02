//To find the determinant of a 3*3 matrix
#include<stdio.h>
int main()
{
    int n,det=0;
    printf("Enter the elements of the matrix :\n");
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    //PRINTING ORIGINAL ARRAY
    printf("ORIGINAL ARRAY:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //FINDING THE DETERMINANT
for(int i=0;i<3;i++)
{
    det = det + (arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3] - arr[1][(i+2)%3]*arr[2][(i+1)%3]));
}
  printf("\nThe Determinant of the matrix is: %d",det);

    return 0;
}