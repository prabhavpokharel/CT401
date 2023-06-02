/*
				i	space	output
567898765		0	0		5...9	8...5
 4567654		1	1		4...7	6...4
  34543			2	2		3...5	4...3
   232			3	3		2...3	2...2
    1			4	4		1...1	0...0

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, k, l;
	
	for(i=0; i<=4; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		
		for(k=5-i; k<=(5-i)*2-1; k++)			//@prabhavpokharel (KAN079BCT051)
		{
			printf("%d", k);
		}
		
		for(l=8-2*i; l>=5-i; l--)
		{
			printf("%d", l);
		}
		
		printf("\n");
	}
	
	getch();
}


