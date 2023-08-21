// A program to calculate and display the area of the triangle.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a,b,c,s,area;
	printf("Enter three sides of the triangle:");
	scanf("%f %f %f", &a, &b, &c);
	if((a+b)>c && (b+c)>a && (a+c)>b)
	{
		s = (a + b + c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\n The area of the triangle is %f", area);
	}
	else
	{
		printf("Given sides don't form a triangle");
	}
	getch();
}
