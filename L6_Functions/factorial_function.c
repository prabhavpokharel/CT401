#include<stdio.h>
#include<conio.h>

int fact(int);

void main()
{
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	printf("The factorial of %d is %d", n, fact(n));
	
	getch();
}

int fact(int n)
{
	int i, f=1;
	
	for(i=1; i<=n; i++)
	{
		f = f * i;	
	}
	
	return f;
}

