/*
			i	space	position	
       k	0	7		8...8		
      wk	1	6		7...8		
     owk	2	5		6...8		
    howk	3	4		5...8		
   chowk	4	3		4...8		
  lchowk	5	2		3...8		
 ulchowk	6	1		2...8		
pulchowk	7	0		1...8		

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i, j, k, l;
	char n[9]="pulchowk";
	
	for(i=0; i<=strlen(n); i++)
	{
		for(j=0; j<strlen(n)-i; j++)			//@prabhavpokharel (KAN079BCT051)
		{
			printf(" ");
		}
		
		for(k=8-i; k<=8; k++)
		{
			printf("%c", n[k]);
		}
		
		printf("\n");
	}
	
	getch();
}


