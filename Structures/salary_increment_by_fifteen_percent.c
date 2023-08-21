/* Create a structure named person with name,address and salary as its member.
Enter values for 5 persons, pass the structure to a function that increases salary by
15% each. Display the updated information in the main() function.*/

#include<stdio.h>
struct person{
	char name[20];
	char address[20];
	int salary;
};
void update(struct person []);
void main()
{
	struct person p[5];
	int i;
	printf("Enter information of 5 person:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter info. of person %d\n",i+1);
		printf("Enter name: ");
		scanf("%s", p[i].name);
		printf("Enter address: ");
		scanf("%s", p[i].address);
		printf("Enter salary: ");
		scanf("%d", &p[i].salary);
	}	
	update(p);
	for(i=0;i<5;i++)
	{
		printf("\nName: %s\naddress: %s\nsalary: %d\n",p[i].name,p[i].address,p[i].salary);
		
	}
}

void update(struct person p[])
{
	int i;
	for(i=0;i<5;i++)
	{
		p[i].salary = p[i].salary + 0.15 * p[i].salary;
	}
}
