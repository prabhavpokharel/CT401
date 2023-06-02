/*
				i	space	output
123454321		0	0		1...5	4...1
 1234321		1	1		1...4	3...1	
  12321			2	2		1...3	2...1
   121			3	3		1...2	1...1
    1			4	4		1...1	0...0

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, k, l;

	for(i=0; i<5; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		
		for(k=1; k<=5-i; k++)			//@prabhavpokharel (KAN079BCT051)
		{
			printf("%d", k);
		}
		
		for(l=5-i-1; l>=1; l--)
		{
			printf("%d", l);
		}
		
		printf("\n");
	}
	
	getch();
}

 
