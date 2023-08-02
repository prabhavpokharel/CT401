//WAP to calculate the sum of digits of given integer upto single digit using  recursion.

#include<stdio.h>
#include<conio.h>

int sod(int);

void main()
{
	int n, i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n>9)
	{
		n = sod(n);	
	}
	
	printf("Sum of digits is %d", n);

	getch();
}

int sod(int a)
{
	if(a<=9)
		return a;
	else
		return a%10 + sod(a/10);
}

