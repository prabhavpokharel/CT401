#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0, j = 0, k = 0, r1, c1, r2, c2, a[10][10], b[10][10], res[10][10];
	
	//For Matrix A
	printf("Enter the order of the matrix A(row x column): ");
	scanf("%d%d",&r1,&c1);
	
	//For Matrix B
	printf("Enter the order of the matrix B(row x column): ");
	scanf("%d%d",&r2,&c2);
	
	
	//Matrix Multiplication
	if(c1 == r2)
	{
		//input A
			printf("Enter the elements of the matrix A: ");
		for(i = 0; i < r1; i++)
		{
			for(j = 0;j < c1;j++)
				scanf("%d",&a[i][j]);
		}
		
		//input B
		printf("Enter the elements of the matrix B: ");
		for(i = 0; i < r2; i++)
		{
			for(j = 0;j < c2;j++)
				scanf("%d",&b[i][j]);
		}
		
	
		for(i = 0; i< r1; i++)
		{
			for(j = 0; j < c2; j++)
			{
				res[i][j] = 0;
				for(k = 0; k < c1; k++)
				{
					res[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		
		//displaying the result
		printf("\nThe product of the matrices A and B (A x B) is \n");
		for(i = 0; i < r1; i++)
		{
			for(j = 0; j < c2;j++)
				printf("%d ",res[i][j]);
			printf("\n");
		}
	}
	else
	{
		printf("Matrix Multiplication not possible");
	}
	
}
