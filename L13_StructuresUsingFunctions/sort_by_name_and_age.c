#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
	char name[30];
	int age;
}s[5];

void namesorter(struct student[]);
void agesorter(struct student[]);

int main()
{
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("\nName: ");
		fflush(stdin);
		scanf("%s", s[i].name);	
		printf("Age: ");
		scanf("%d", &s[i].age);
	}
	
	namesorter(s);
	
	printf("\n\nAccording to name:");
	for(i=0; i<5; i++)
	{
		printf("\nName: %s Age: %d", s[i].name, s[i].age);
	}
	
	agesorter(s);
	
	printf("\n\nAccording to age:");
	for(i=0; i<5; i++)
	{
		printf("\nName: %s Age: %d", s[i].name, s[i].age);
	}
	
 	getch();
	return 0;
}

void namesorter(struct student s[])
{
	int i,j;
	struct student temp;
	
	for (i=0; i<=3; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

void agesorter(struct student s[])
{
	int i, j;
	struct student temp;
	
	for(i=0; i<=3; i++)
	{
		for(j=i+1; j<=4; j++)
		{
			if(s[j].age<s[i].age)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

