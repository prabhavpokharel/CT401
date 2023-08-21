//Display the pattern
//				1
//			2	3	2
//		3	4	5	4	3
//	4	5	6	7	6	5	4
// ................... upto n lines


#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k,odd=1,inc;
	printf("Enter any number:");
	scanf("%d",&n);
	for( i=1; i<=n; i++)
	{
		for( j=1; j<=(n-i); j++ )
			printf(" \t");
		k = i;
		inc = 1;
		while(k>=i)
		{
			printf("%d\t",k);
			if(k==odd)
				inc = -1;
			k += inc;
		}
		printf("\n");
		odd = odd + 2;
	}
	getch();
	return 0;
}
