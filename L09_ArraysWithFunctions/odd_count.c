/*WAP that reads n numbers in an array and find the count of odd numbers present in the array. Make user defined function
that takes argument and display the result from the main.*/

#include<stdio.h>
#include<conio.h>

int oddcount(int[], int);

void main()
{
	int n, i, a[20]; 
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nTotal Odd Numbers = %d", oddcount(a, n));
	
	getch();
}

int oddcount(int x[], int n)
{
	int i, count=0;
	
	for(i=0; i<n; i++)
	{
		if(x[i]%2 != 0)
		{
			count++;
		}
	}
	
	return count;
}

