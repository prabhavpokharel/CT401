//HCF and LCM of two numbers

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,x,y,temp,hcf,lcm;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	a = x;
	b = y;
	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	hcf = a;
	lcm = (x*y) / hcf;
	printf("The HCF and LCM of two given numbers are %d and %d respectively.",hcf,lcm);
	getch();
}
