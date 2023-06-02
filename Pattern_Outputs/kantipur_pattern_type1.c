/*
			i		letters
K			0		0...0
Ka			1		0...1
KaN			2		0...2
KaNt		3		0...3
KaNtI		4		0...4
KaNtIp		5		0...5
KaNtIpU		6		0...6
KaNtIpUr	7		0...7

odd->smallcase
even->uppercase

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i, j;
	char n[9]="kantipur";				//@prabhavpokharel (KAN079BCT051)
	
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


