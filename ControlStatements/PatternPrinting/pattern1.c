// A program to print pattern
// 1234.....n
// 1234.....n
// ...
// n times
#include<stdio.h>
int main()
{
	int i,j,n;
    printf("Enter any number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for( j=1; j<=n; j++)
		{
			printf("%d\t",j);
			
	}
		printf("\n");
	}
	return 0;
}
	

