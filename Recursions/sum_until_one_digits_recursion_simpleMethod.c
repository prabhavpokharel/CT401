//Sum to one digit(simple method)

#include<stdio.h>


int sumdigits1(int num)
{
	if(num>0)
	{
		return (num%10) + sumdigits1(num/10);
	}
	else
		return 0;

}

int main()
{
	int sum=0,k=0;
	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	while(num>9)
	{
		sum = sumdigits1(num); //sum = 6
		num = sum; //num = 6
	}
	printf("The sum of digits of the given number is %d",num);

	return 0;

}
