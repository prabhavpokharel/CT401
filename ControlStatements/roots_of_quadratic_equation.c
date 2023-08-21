#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a,b,c,d,r1,r2,real,imag;
	int dcase;
	printf("Enter the value of a,b and c for equation: ");
	scanf("%f %f %f",&a,&b,&c);
	d = b*b - 4*a*c;
	if(d == 0)
		dcase = 1;
	else if(d>0)
		dcase = 2;
	else
		dcase = 3;
	switch(dcase)
	{
		case 1:
			r1 = -b/(2*a);
			printf("The roots are real and equal which is %f.",r1);
			break;
		case 2:
			r1 = (-b + sqrt(d))/(2 * a);
			r2 = (-b - sqrt(d))/(2 * a);
			printf("Roots are real and unequal which are %f and %f.",r1,r2);
			break;
		case 3:
			real = -b/(2*a);
			imag = fabs(sqrt(-d)/(2*a));
			printf("Roots are complex which are: \n root1 = %f + %fi \n root2 = %f - %fi",real,imag,real,imag);
			break;
		default:
			printf("Error");
			break;
	}
	getch();
}
