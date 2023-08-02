#include<stdio.h>
#include<conio.h>

void oe(long long int, int*, int*);

void main()
{
	long long int n;
	int ocount=0, ecount=0;
	
	printf("Enter any number: ");
	scanf("%lld", &n);
	
	oe(n, &ocount, &ecount);
	
	printf("Odd Count = %d \nEven Count = %d", ocount, ecount);
	
	getch();
}

void oe(long long int num, int* ocount, int* ecount)
{
	int rem;
	while(num!=0)
	{
		rem = num % 10;
		if(rem%2==0)
		{
			(*ecount)++;
		}else
		{
			(*ocount)++;
		}
		num = num/10;
	}
}
