/*WAP to create user defined that takes argument to find the areas of rectangle 
and circle. The result must be displayed in the main.*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14

float rectArea(float, float);
float circArea(float);

void main()
{
	float l, b, r;
	
	printf("Enter length, breadth of the rectangle and radius of the circle: ");
	scanf("%f%f%f", &l, &b, &r);
	
	printf("The area of the rectangle is %.2f\nThe area of the circle is %.2f", rectArea(l, b), circArea(r));
	
	getch();
}

float rectArea(float l, float b)
{
	return(l*b);
}

float circArea(float r)
{
	return(PI*r*r);
}

