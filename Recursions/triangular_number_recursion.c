//Check triangular number by recursion

#include<stdio.h>
#include<conio.h>

int triangular(int);

void main()
{
	int num,result;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	result = triangular(num);
	if(result == 1)
		printf("\n%d is triangular",num);
	else
		printf("\n%d is not triangular",num);
	getch();
}

int triangular(int n)
{
	static int i = 0;
	if(n == 0)
		return 1;
	else if(n<0)
		return 0;
	else
	{
		i++;
		return(triangular(n-i));
	}
}
