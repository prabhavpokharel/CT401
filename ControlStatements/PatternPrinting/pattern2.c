// A program to print pattern
// *
// **
// ***
// .... upto n lines
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for( j=1; j<=i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
