#include<stdio.h>
#include<conio.h>
#include<string.h>

void concat(char [], char[]);

void main()
{
	char name1[20], name2[20];
	
	printf("Enter two name for linking: ");
	scanf("%s%s", name1, name2);
	
	concat(name1, name2);
	
	printf("%s", name1);
	
	getch();
}

void concat(char n1[], char n2[])
{	
	int i, j=0;

	for(i=strlen(n1); n2[j]!='\0'; i++)
	{
		n1[i] = n2[j];
		j++;
	}
	n1[i]='\0';
}

