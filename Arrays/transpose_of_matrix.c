//WAP to find the transpose of a given matrices

#include<stdio.h>
#include<conio.h>

void main()
{

	int r, c, i, j, a[10][10], t[10][10];

	printf("Enter number of row and column of the matrix: ");
	scanf("%d%d", &r, &c);	
	
	printf("\n");	
	
	printf("Enter element\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}	
		
	printf("\n");
		
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			t[i][j] = a[j][i];
		}
	}
		
	printf("\nOriginal\n");
		
	for(i=0; i<r; i++)
	{	
		for(j=0; j<c; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
		
	printf("\nTranspose\n");	
	for(i=0; i<c; i++)
	{	
		for(j=0; j<r; j++)
		{
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}
	
	getch();
}

