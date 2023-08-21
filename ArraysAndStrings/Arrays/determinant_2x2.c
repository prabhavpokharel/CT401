/*WAP to read a 2x2 matrix and make a user defined function to find the determinant.
The result must be displayed from main.*/

#include<stdio.h>
#include<conio.h>

int det(int [][2]);

void main()
{
	int i, j, a[2][2];
	
	printf("Enter elements for 2x2 matrix\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);	
		}
	}
	
	printf("\nDeterminant = %d", det(a));
	
	getch();
}

int det(int mat[][2])
{
	int d;
	
	d = mat[0][0]*mat[1][1] - mat[1][0]*mat[0][1];
	
	return d;
}

