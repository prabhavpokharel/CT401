//Program to add, subtract, multiply and divide two complex number.

#include<stdio.h>
#include<math.h>

struct complex
{
	float real,imag;
};

void main()
{
	float x, y, z;
	struct complex a,b,c;
	
	printf("Enter the real and imaginary part of the first complex number: ");
	scanf("%f%f",&a.real,&a.imag);
	printf("Enter the real and imaginary part of the second complex number: ");
	scanf("%f%f",&b.real,&b.imag);	
	
	//Addition
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	if(c.imag >= 0)
		printf("Addition result = %.2f + %.2fi\n",c.real,c.imag);
	else
		printf("Addition result = %.2f - %.2fi\n",c.real,fabs(c.imag));
	
	//Subtraction
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	if(c.imag >= 0)
		printf("Subtraction result = %.2f + %.2fi\n",c.real,c.imag);
	else
		printf("Subtraction result = %.2f - %.2fi\n",c.real,fabs(c.imag));
	
	//Multiplication
	c.real = a.real*b.real - a.imag*b.imag;
	c.imag = a.imag*b.real + a.real*b.imag;
	if(c.imag >= 0)
		printf("Multiplication result = %.2f + %.2fi\n",c.real,c.imag);
	else
		printf("Multiplication result = %.2f - %.2fi\n",c.real,fabs(c.imag));
		
	//Division
	if(b.real != 0 || b.imag != 0)
	{
		x = a.real*b.real + a.imag*b.imag;
		y = a.imag*b.real - a.real*b.imag;
		z = pow(b.real,2) + pow(b.imag,2);
		c.real = x/z;
		c.imag = y/z;
		if(c.imag >= 0)
			printf("Division result = %.2f + %.2fi\n",c.real,c.imag);
		else
			printf("Division result = %.2f - %.2fi\n",c.real,fabs(c.imag));
	}
	else
		printf("Divison by 0 is not possible.\n");
}
