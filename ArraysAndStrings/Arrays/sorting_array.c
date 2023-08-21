#include<stdio.h>
#include<conio.h>
void sortarray(int [], int);
void main()
{
	int i, num[8];
	for( i=0 ; i<8; i++)
	{
			scanf("%d", &num[i]);
	}
	sortarray(num, 8);
	for( i=0 ; i<8 ; i++)
	{
		printf("%d\t", num[i]);
	}
}
void sortarray(int arr[], int n)
{
	int i, j, temp;
	for(i=0 ; i<n; i++)
	{
		for( j=i+1 ; j<n ; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
