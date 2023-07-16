/*WAP to create user defined that takes argument to find the areas of rectangle 
and circle. The result must not be displayed in the main.*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void rectArea(float, float);
void circArea(float);

void main()
{
	float l, b, r;
	
	printf("Enter length, breadth of the rectangle and radius of the circle: ");
	scanf("%f%f%f", &l, &b, &r);
	
	rectArea(l,b);
	circArea(r);
	
	getch();
}

void rectArea(float l, float b)
{
	printf("The area of rectangle is %.2f", l*b);
}

void circArea(float r)
{
	printf("\nThe area of circle is %.2f", PI*r*r);
}
