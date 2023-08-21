/* A program to read the size and elements of the array and separate even numbers 
and odd numbers in two different array and display them*/
#include<stdio.h>

void main()
{
	int a[20], e[10], o[10], ec = 0 , oc = 0, i, s;
	printf("Enter the size of the array:\n");
	scanf("%d", &s);
	printf("Enter the array elements:\n");
	for( i=0 ; i<s ; i++)
	{
		scanf("%d", &a[i]);
	}
	for( i=0 ; i<s ; i++)
	{
		if(a[i]%2 == 0)
		{
			e[ec] = a[i];
			ec++;
		}
		else
		{
			o[oc] = a[i];
			oc++;
		}
	}
	printf("Even array is:\n");
	for(i=0;i<ec;i++)
		printf("e[%d] = %d\n", i, e[i]);
	printf("Odd array is:\n");
	for(i=0;i<oc;i++)
		printf("0[%d] = %d\n", i, o[i]);
}
