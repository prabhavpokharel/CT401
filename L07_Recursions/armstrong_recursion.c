#include<stdio.h>
#include<conio.h>
#include<math.h>

int armstrong(int);

void main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while
	
	if(armstrong(num)==num)
	{
		printf("%d is an armstrong number.", num);
	}else
	{
		printf("%d is not an armstrong number.", num);
	}

	getch();
}

int armstrong(int x)
{
	if(x==0)
	{
		return 0;
	}else
	{
		return pow((x%10),3) + armstrong(x/10);
	}
}

