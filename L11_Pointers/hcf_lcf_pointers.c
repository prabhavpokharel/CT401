/*WAP to read two integers from the user and pass it to the function that calculates the hcf and 
lcm of those numbers. result must be displayed from main.*/

#include<stdio.h>
#include<conio.h>

void hcflcm(int, int, int *, int*);

void main()
{
	int a, b, h, l;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);	
	
	hcflcm(a, b, &h, &l);
	
	printf("HCF = %d LCM = %d", h, l);
	
	getch();
}

void hcflcm(int a, int b, int *h, int *l)
{
	int i=1;
	while(i<=a || i<=b)
	{
		if(a%i==0 && b%i==0)
		*h=i;
		i++;
	}
	*l=(a*b)/(*h);
}



