#include<stdio.h>
#include<conio.h>

void swap(int *, int *);

void main()
{
	int a, b;
	
	printf("Enter any two numbers: ");
	scanf("%d%d", &a, &b);
	
	printf("Before Swapping: a = %d b = %d", a, b);
	
	swap(&a, &b);
	
	printf("\nAfter Swapping: a = %d b = %d", a, b);
	
	getch();
}

void swap(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}


