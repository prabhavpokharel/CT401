/*
			i	letters	
P			0		1
Pu			1		2
PuL			2		3
PuLc		3		4
PuLcH		4		5
PuLcHo		5		6
PuLcHoW		6		7
PuLcHoWk	7		8	

odd->smallcase
even->uppercase

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i, j;
	char n[9]="pulchowk";				//@prabhavpokharel (KAN079BCT051)
	
	for(i=0; i<strlen(n); i++)
	{		
		for(j=0; j<i+1; j++)
		{
			if(j%2 == 0)
			{
				printf("%c", n[j]-32);
			}
			else
			{
				printf("%c", n[j]);
			}
			
		}
		
		printf("\n");
	}
	
	getch();
}


