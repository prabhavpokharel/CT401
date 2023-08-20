/*
				i	space	output
    *			1	4		1
   ***			2	3		3
  *****			3	2		5
 *******		4	1		7
*********		5	0		9

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, k;
	
	for(i=1; i<=5; i++)					//@prabhavpokharel (KAN079BCT051)
	{
		for(j=0; j<5-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	getch();
}


