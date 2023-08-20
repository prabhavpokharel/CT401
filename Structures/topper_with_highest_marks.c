#include<stdio.h>
#include<conio.h>

struct student
{
	char name[30];
	int roll;
	float marks;	
};

float topper(struct student []);

int main()
{
	struct student s[5];
	int i;
	float hmarks;
	
	for(i=0; i<5; i++)
	{
		printf("\nStudent Name: ");
		fflush(stdin);
		gets(s[i].name);
		printf("Roll No.: ");
		scanf("%d", &s[i].roll);
		printf("Total Marks: ");
		scanf("%f", &s[i].marks);
	}
	
	hmarks = topper(s);
	
	for(i=0; i<5; i++)
	{
		if(hmarks == s[i].marks)
		{
			printf("\nTopper Details \nName: %s \tRoll No.: %d", s[i].name, s[i].roll);
		}
	}
	
 	getch();
	return 0;
}

float topper(struct student s[])
{
	int i, highest=s[0].marks;
	
	for(i=0; i<5; i++)
	{
		if(s[i].marks>highest)
		{
			highest = s[i].marks;
		}
	}
	
	return highest;
}

