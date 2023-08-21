//Evaluate series to n terms specified by user, 
// x/1! - (x^3)/3! + (x^5)/5! - ......
//Factorial must be calculated by recursion

#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n)
{
	if(n == 1 || n == 0)
		return 1;
	else
		return(n*fact(n-1));
}

void main()
{
	float sum = 0,nume,deno,x;
	int n,i,sign;
	printf("\nEnter the value of x and n: ");
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		nume = pow(x,2*i-1);
		deno = fact(2*i-1);
		sign = pow(-1,i+1);
		sum = sum+sign*(nume/deno);
	}
	printf("\nSum of series = %f",sum);
	getch();
}
