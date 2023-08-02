/* WAP to read a matrix and find the largest element from each row and store them in an array
display the resulting array from the main function. */

#include<stdio.h>
#include<conio.h>

void large(int [][20], int[20], int, int);

void main()
{
	int i, j, a[20][20], largest[20], r, c;
	
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

	large(a, largest, r, c);
	
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		printf("%d\t", largest[i]);
	}
	
	getch();
}

void large(int mat[][20], int largest[20], int x, int y)
{
	int i, j, large_value;

	for(i=0; i<x; i++)
	{
		largest[i]= mat[i][0]; 
		
		for(j=0; j<y; j++)
		{
			if(mat[i][j] > largest[i])
			{
				largest[i] = mat[i][j]; 
			}
		}
	}
}

