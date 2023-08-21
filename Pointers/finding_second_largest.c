//Program to find second largest element in an array using the concept of pointer.
#include<stdio.h>
int main()
{
    int a[20],i,n,j,temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", (a+i));
    }
    //sort the array in deszcending order
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( *(a+i) < *(a+j))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    //display the element 1st index of the array
    printf("The second largest element is : %d", *(a+1));
}