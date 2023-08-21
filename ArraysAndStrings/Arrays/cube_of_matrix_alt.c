/* WAP to read a matrix and cube all its elements use the concept of functions and display
the result from the main. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void cube(int [][20], int[][20], int, int);

void main()
{
	int i, j, a[20][20], res[20][20], r, c;
	
	printf("Enter order for the matrix: ");
	scanf("%d%d", &r, &c);
	
	printf("\nEnter elements for %dx%d matrix\n", r, c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);	
		}
	}
	
	cube(a, res, r, c);
	
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t", res[i][j]);	
		}
		printf("\n");
	}
	
	getch();
}

void cube(int mat[][20], int result[][20], int x, int y)
{
	int i, j;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			result[i][j] = pow(mat[i][j], 3);	
		}
	}	
}

