// A program to print pattern
//         n
//    ......
//	  4....n
//   34....n
//  234....n
// 1234....n
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter any number:");
	scanf("%d",&n);
	for( i=n; i>=1; i--)
	{
		for( j=1; j<=(i-1); j++ )
			printf(" \t");
		for( k=i; k<=n; k++)
			printf("%d\t", k);
		printf("\n");
	}
	return 0;
}





//for( i=n; i>=1; i--)
//	{
//		for( j=1; j<=(i-1); j++ )
//			printf(" \t");
//		for( k=i; k<=n; k++)
//			printf("%d\t", k);
//		printf("\n");
//	}

//for( i=1; i<=n; i++)
//	{
//		for( j=1; j<=(n-i); j++ )
//			printf(" \t");
//		for( k=n-i+1; k<=n; k++)
//			printf("%d\t", k);
//		printf("\n");
//	}
