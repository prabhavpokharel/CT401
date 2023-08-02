//WAP to convert decimal number to binary using recursion.

#include<stdio.h>
#include<conio.h>

int binum(int);

void main()
{
	int decnum;
	
	printf("Enter decimal number: ");
	scanf("%d", &decnum);
	
	printf("Binary = %d", binum(decnum));	

	getch();
}

int binum(int x)
{
	if(x==0)
	{
		return 0;
	}else if(x==1)
	{
		return 1;
	}else
	{
		return (x%2) + binum(x/2)*10;
	}
}

