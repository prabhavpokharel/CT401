//A Program to sort the array using pointer.
#include<stdio.h>
void sort(int [],int);
int main()
{
    int a[20],n,i,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    sort(a,n);
    printf("The sorted array in ascending order is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}

void sort(int ar[],int s)
{
    int i,j,temp;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if( *(ar+i) > *(ar+j) )
            {
                temp = *(ar+i);
                *(ar+i) = *(ar+j);
                *(ar+j) = temp;
            }
        }
    }
}