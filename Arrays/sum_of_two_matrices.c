//WAP to find the sum of two matrices

#include<stdio.h>
#include<conio.h>

void main()
{

	int r1, c1, r2, c2, i, j, a[10][10], b[10][10], o[10][10];

	printf("Enter number of row and column of Matrix 1: ");
	scanf("%d%d", &r1, &c1);	
	
	printf("Enter number of row and column of Matrix 2: ");
	scanf("%d%d", &r2, &c2);
	
	printf("\n");	
	
	if(r1==r2 && c1==c2)
	{
		printf("Enter element\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("a%d%d: ", i+1, j+1);
				scanf("%d", &a[i][j]);
			}
		}	
		
		printf("\n");
		printf("Enter element\n");
		
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("b%d%d: ", i+1, j+1);
				scanf("%d", &b[i][j]);
			}
		}
		
		printf("\n");
		
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				o[i][j] = a[i][j] + b[i][j];
			}
		}
		
		printf("The sum of matrix a and b is\n");
		
		for(i=0; i<r1; i++)
		{	
			for(j=0; j<c1; j++)
			{
				printf("%d\t", o[i][j]);
			}
			printf("\n");
		}
	}else
	{
		printf("The given matrices cannot be added.");
	}
	
	getch();
}

