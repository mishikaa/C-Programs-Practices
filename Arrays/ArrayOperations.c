//Array Operations : a)Sum b)Largest No. c)Element search d)Delete element e)2nd Largest element

#include<stdio.h>

void sum(int *array);
int biggestNo(int array[],int max,int i);
void Search_element(int arr[]);
void delete_element(int array[]);
void second_largest(int arr[]);

int size;
int main()
{
    printf("Enter no. of elements:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr);
    int result=biggestNo(arr,-999,0);
    printf("Biggest number is : %d",result);
    Search_element(arr);
    delete_element(arr);
    second_largest(arr);
    return 0;
}
//a)FINDING THE SUM OF ALL ARRAY ELEMENTS
void sum(int *array)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
    sum+=*(array+i);
    }
    printf("Sum : %d\n",sum);
}
//b)FINDING THE BIGGEST NUMBER USING RECURSION
int biggestNo(int array[],int max,int i)
{
if(i<size)   
    {
        if(array[i]>max)
        max=array[i];

        i++;    
        biggestNo(array,max,i);
    }
    else
    {
    return max;
    }
}
//c)TO SEARCH FOR AN ELEMENT AND FIND ITS POSITION(S)
void Search_element(int *arr)
{
    int num;
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&num);
        printf("Element %d is present at position(s) : ",num);
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)==num)
        {
            printf("\n%d",(i+1));
        }
    }
}
//d) DELETE SPECIFIED ELEMENT FROM ALL ITS POSITION IN AN ARRAY
void delete_element(int array[])
{
    int num,temp;
    int del_array[size];
    printf("\nEnter the element to be deleted:\n");
    scanf("%d",&num);
    int i;
for (i=0; i<size; i++)
{
    if (array[i]==num)
    {
        array[i]=0;
    }
}
printf("Array after deletion of element %d :\n",num);
for(int i=0;i<size;i++)
{
    if(array[i]!=0)
    printf("%d ",array[i]);
}
}
//e)PRINTING THE SECOND LARGEST ELEMENT OF THE ARRAY
void second_largest(int arr[])
{
    int temp;
    //SORTING THE ARRAY IN ASCENDING ORDER

   for (int i = 0; i < size-1; i++)      
  {
       for (int j = 0; j < size-i-1; j++) 
       {
           if (arr[j]<arr[j+1])
           {
    temp=arr[arr[j]];
    arr[j]=arr[j+1];
    arr[j+1]=temp;;
           }
       }
   }
    //NOW PRINTING THE ELEMENT AT 2ND LAST POSITION WHICH WILL BE THE SECOND LARGEST NO.
    printf("\nSecond largest number in array : %d\n",arr[1]);
}
