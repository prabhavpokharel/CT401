//Find the value of y based on the value of x
//	y = 2x+300  	for x<50
//	y = 200 		for x=50
//	y = 50x-100 	for x>50
//use conditional operator(?:)

#include<stdio.h>
#include<conio.h>

void main()
{
	float x,y;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	y = (x==50)?200:(x<50)?(2*x+300):(50*x-100);
	printf("y = %f",y);
	getch();
}
