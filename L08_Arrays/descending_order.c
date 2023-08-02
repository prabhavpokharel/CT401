//WAP a program to sort the elements in descending order

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20], n, i, j, temp;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<=(n-2); i++)
	{
		for(j=i+1; j<=(n-1); j++)
		{
			if(a[j]>a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}

	getch();
}

