//To find the sum to one digit

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int rem,sum=0,num;
	printf("Enter a postive integer: ");
	scanf("%d",&num);
	num = abs(num);
	while(num>10)
	{
		while(num != 0)
		{
			rem = num%10;
			sum += rem;
			num = num/10;
		}
		num = sum;
		sum = 0;
	}
	printf("\n\nThe required result is %d",num);
	return 0;
}
