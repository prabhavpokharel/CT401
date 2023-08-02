//0,1,1,2,3,5,8,13...

#include<stdio.h>
#include<conio.h>

int fibo(int);

void main()
{
	int n, f, i;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	
	for(i=0; i<n; i++)
	{
		f=fibo(i);
		printf("%d ", f);	
	}
	
	getch();
}

int fibo(int x)
{
	if(x==0)
	{
		return 0;
	}else if(x==1)
	{
		return 1;
	}
	{
		return fibo(x-1)+fibo(x-2);
	}
}

