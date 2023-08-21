#include<stdio.h>

int search(int [], int, int); //declaration
int main()
{
	int arr[10], x, i, n, r;
	printf("Enter the size of array:\n");
	scanf("%d", &n);
	printf("Enter the array elements:\n");
	for( i=0 ; i<n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the number to be searched:\n");
	scanf("%d", &x);
//	search(arr,n,x);
	r = search(arr,n,x);
	if(r == 1)
		printf("%d is in array",x);
	else
		printf("%d is not in array",x);
	
	return 0;
}

int search(int a[], int s, int b) //definition
{
	int i;
	for( i=0 ; i<s ; i++)
	{
		if(b == a[i])
		{
			return 1;
		}
	}
	return 0;
}
