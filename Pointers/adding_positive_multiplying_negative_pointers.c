#include<stdio.h>
#include<conio.h>

void op(int[][10], int[][10], int[][10], int, int);

void main()
{
	int a[10][10], b[10][10], res[10][10], i, j, r, c;
	
	printf("Enter the order of matrices: ");
	scanf("%d%d", &r, &c);
	
	printf("\nEnter elements for first matix: \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a%d%d = ", i+1, j+1);
			scanf("%d", *(a+i)+j);
		}
	}
	
	printf("\nEnter elements for second matix: \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("b%d%d = ", i+1, j+1);
			scanf("%d", *(b+i)+j);
		}
	}
	
	op(a, b, res, r, c);
	
	printf("\nResultant Matrix: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t", *(*(res+i)+j));
		}
		printf("\n");
	}
	
	getch();
}

void op(int x[][10], int y[][10], int res[][10], int r, int c)
{
	int i, j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(*(*(x+i)+j)>0 && *(*(y+i)+j)>0)
			{
				*(*(res+i)+j) = *(*(x+i)+j) + *(*(y+i)+j);
			}
			else if(*(*(x+i)+j)<0 || *(*(y+i)+j)<0)
			{
				*(*(res+i)+j) = *(*(x+i)+j) * (*(*(y+i)+j));
			}
		}
	}
}

