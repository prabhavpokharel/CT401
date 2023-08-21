/* write a program to input name, post and salary of five employees from the main(()
function and pass to struct type user defined function(arguments of this function
should also be a structure type). This function returns a structure variable which
keeps the record of only those employees whose salary is greater than 10,000. This
modified record is also diaplayed from the main() function.*/

#include<stdio.h>

struct emp{
	char name[20], post[20];
	int salary;
};

struct emp *sal(struct emp [], int *);

void main()
{
	struct emp e[5],*t;
	int n = 0,i,m;
	printf("Enter information of 5 employees:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the information of employee %d.\n",i+1);
		printf("Enter name:");
		scanf("%s",e[i].name);
		printf("Enter designation:");
		scanf("%s",e[i].post);
		printf("Enter salary:");
		scanf("%d",&e[i].salary);
	}
	
	t = sal(e,&n);
	
	for(i=0;i<n;i++)
	{
		printf("Name:%s post:%s salary:%d\n",(t+i)->name,(t+i)->post,(t+i)->salary);
	}
	
}

struct emp *sal(struct emp e[], int *p)
{
	int i;
	static struct emp a[5];
	struct emp *q;
	q = a;
	for(i=0;i<5;i++)
	{
		if(e[i].salary>10000)
		{
			a[*p] = e[i];
			*p = *p + 1;
		}
	}
	return q;
}
