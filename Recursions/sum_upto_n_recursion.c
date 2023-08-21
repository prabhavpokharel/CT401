#include<stdio.h>
#include<conio.h>

int sum(int);

void main()
{
	int n; 
	
	printf("Enter any number: ");
	scanf("%d", n);
	
	printf("Sum upto n digits is %d", sum(n));
	
	getch();
}

int sum(int x)
{
	if(x==1)
	{
		return 1;
	}else
	{
		
		return x + sum(x-1);
	}
}

