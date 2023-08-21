// Leap Year (Nested If...Else)
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter a Year: ");
	scanf("%d", &year);
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
				printf("\n %d is a leap year.", year);
			else
				printf("\n %d is not a leap year.", year);
		}
		else
			printf("\n %d is a leap year.", year);
	}
	else
		printf("\n %d is not a leap year.", year);
	getch();	
}
