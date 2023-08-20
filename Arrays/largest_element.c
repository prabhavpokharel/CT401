//WAP a program to read n numbers and find the largest element

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20], n, i, largest;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &a[i]);
	}
	
	largest = a[0];
	
	for(i=0; i<n; i++)
	{
		if(a[i]>largest)
		{
			largest = a[i];
		}
	}
	
	printf("\nLargest number is %d", largest);

	getch();
}

