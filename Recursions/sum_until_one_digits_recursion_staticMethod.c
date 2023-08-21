//Sum to one digit by using static variable

#include<stdio.h>
#include<conio.h>

int sumdigits(int num)
{
	static int sum = 0;
	if(num>0)
	{
		sum += (num%10);
		sumdigits(num/10);
	}
	else
		return sum;
}

void main()
{
	int num,sum,k=0;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	do
	{
		sum = sumdigits(num) - k;
		k += sum;
		num = sum;
	}while(num>9);
	printf("The sum of digits of the given number is %d",num);
	getch();
}
