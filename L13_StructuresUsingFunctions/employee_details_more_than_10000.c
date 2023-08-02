#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
	char name[30], post[20];
	float salary;
}e[5], emod[5];

int highsal(struct employee[], struct employee[]);

int main()
{
	int i, j, lim;
	
	for(i=0; i<5; i++)
	{
		printf("\nName: ");
		fflush(stdin);
		scanf("%s", e[i].name);
		printf("Post: ");
		fflush(stdin);
		scanf("%s", e[i].post);
		printf("Salary: ");
		scanf("%f", &e[i].salary);
	}
	
	lim = highsal(e, emod);
	
	printf("\n\nModified Employee List:");
	for(j=0; j<lim; j++)
	{
		printf("\nName: %s Post: %s Salary: %.2f", emod[j].name, emod[j].post, emod[j].salary);
	}
	
 	getch();
	return 0;
}

int highsal(struct employee e[], struct employee emod[])
{
	int i, j=0;
	
	for(i=0; i<5; i++)
	{
		if(e[i].salary>10000)
		{
			emod[j] = e[i];
			j++;
		}
	}
	return j;
}


