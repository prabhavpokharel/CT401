/* WAP to read a square matrix and print the sum of both diagonals use user-defined function
that takes arguments and result must not be displayed from the main. */

#include<stdio.h>
#include<conio.h>

void sum(int [][20], int, int);

void main()
{
	int i, j, a[20][20], r, c;
	
	printf("Enter order for the matrix: ");
	scanf("%d%d", &r, &c);
	
	if(r==c)
	{
		printf("\nEnter elements for %dx%d matrix\n", r, c);
	
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("a%d%d: ", i+1, j+1);
				scanf("%d", &a[i][j]);	
			}
		}
	
		sum(a, r, c);
	
	}else
	{
		printf("\nThe matrix you've entered in not square matrix.\n");	
	}
	
	getch();
}

void sum(int mat[][20], int x, int y)
{
	int i, j, sum_d1=0, sum_d2=0;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(i==j)
			{
				sum_d1 = sum_d1 + mat[i][j];
			}
			else if(i+j == x-1)
			{
				sum_d2 = sum_d2 + mat[i][j];
			}	
		}
	}
	
	printf("\nSum of diagonal 1 = %d", sum_d1);	
	printf("\nSum of diagonal 2 = %d", sum_d2);
}

