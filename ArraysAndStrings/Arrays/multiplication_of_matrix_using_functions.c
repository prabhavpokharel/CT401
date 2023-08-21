#include<stdio.h>
#include<conio.h>
void mult(int [][10], int [][10], int [][10], int,int,int,int);
void main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
	printf("Enter the size of matrix A: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the size of matrix B: ");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter the elements of matrix A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		
		printf("Enter the elements of matrix B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		mult(a,b,c,r1,c1,r2,c2);
		
		printf("The product matrix of A and B is:\n");
		for(i=0 ; i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
}

void mult(int a[][10],int b[][10],int c[][10]int r1,int c1, int r2,int c2)
{
	int i,j,k;
	
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j] = 0;
				for(k=0 ; k<c1 ; ++k)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
}
