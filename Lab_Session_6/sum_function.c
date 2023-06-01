#include<stdio.h>
#include<conio.h>

int sum(int a, int b)
{
	return(a+b);
}

void main()
{
	int a, b;
	
	printf("enter a and b: ");
	scanf("%d%d", &a, &b);
	
	printf("sum = %d", sum(a,b));
	
	
	getch();
}
