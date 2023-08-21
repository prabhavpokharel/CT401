/*Create a structure named marks that has subject and marks as its members. Create another
structure named student that has name, roll, marks and remarks as members. Assume appropriate
type and size of members. Include first structure as a member for the second structure and read
data for 10 students. The modified structure must have provision to store marks of three 
subjects for each student.*/

#include<stdio.h>
struct marks
{
	char subject[50];
	float marks;
};
struct student
{
	char name[50];
	int roll;
	char remarks[10];
	struct marks m[3];
};

void main()
{
	struct student s[10];
	int i,j;
	
	for(i=0; i<10; i++)
	{
		printf("Enter name: ");
		scanf("%s",s[i].name);
		printf("Enter roll: ");
		scanf("%d",&s[i].roll);
		for(j=0;j<3;j++)
		{
			printf("Subject name: ");
			scanf("%s",s[i].m[j].subject);
			printf("Marks: ");
			scanf("%f",&s[i].m[j].marks);
		}
		printf("Remarks: ");
		scanf("%s",s[i].remarks);
	}
	for(i=0; i<10; i++)
	{
		printf("\nName: %s\nRoll: %d\n",s[i].name,s[i].roll);
		for(j=0;j<3;j++)
		{
			printf("\n%s: ",s[i].m[j].subject);
			printf("%f",s[i].m[j].marks);
		}
		printf("\nRemarks: ");
		printf("%s",s[j].remarks);
	}
}
