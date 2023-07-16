/*WAP to calculate permutation and combination for given n and r. The permutation and combination
are defined as*/

#include<stdio.h>
#include<conio.h>

int fact(int);
int perm(int, int);
int comb(int, int);

void main()
{
	int n, r;
	
	printf("Enter n and r: ");
	scanf("%d%d", &n, &r);
	
	printf("Permutation = %d\nCombination = %d", perm(n,r), comb(n,r));
	
	getch();
}

int fact(int n)
{
	int f, j;
	f = 1;
	
	for(j=1; j<=n; j++)
	{
		f = f * j;
	}
	
	return f;
}

int perm(int n, int r)
{
	return(fact(n)/fact(n-r));
}

int comb(int n, int r)
{
	return(perm(n,r)/fact(r));
}


