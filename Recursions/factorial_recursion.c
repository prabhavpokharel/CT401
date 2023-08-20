//WAP to create a recursive function to find factorial of a given number by the user.

#include<stdio.h>
#include<conio.h>

int fact(int);

void main()
{
	int n; 
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	printf("Factorial is %d", fact(n));
	
	getch();
}

int fact(int x)
{
	if(x==1)
	{
		return 1;
	}else
	{
		
		return x * fact(x-1);
	}
}

