#include<stdio.h>
#include<conio.h>
#include<string.h>

void alphabetical(char [][16], int);

void main()
{
	int n, i;
	char name[20][16];
	
	printf("Enter number of names: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d. Name: ", i+1);
		scanf("%s", name[i]);
	}
	
	alphabetical(name, n);
	
	for(i=0; i<n; i++)
	{
		printf("\n%d. %s", i+1, name[i]);
	}
	
	getch();
}

void alphabetical(char name[][16], int n)
{
	int i, j;
	char temp[16];
	
	for (i=0; i<=n-2; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
}

