#include<stdio.h>
#include<conio.h>

struct address
{
	int province;
	char district[20], town[20];
};

struct person
{
	long long int phone;
	char name[30];
	struct address a;
};

void search(struct person[], int);

int main()
{
	struct person p[5];
	int i, searchterm;
	
	for(i=0; i<5; i++)
	{
		printf("\nName: ");
		fflush(stdin);
		scanf("%s", p[i].name);	
		printf("Phone Number: ");
		scanf("%lld", &p[i].phone);
		printf("Province Number, District, Town: ");
		fflush(stdin);
		scanf("%d%s%s", &p[i].a.province, p[i].a.district, p[i].a.town);
	}
	
	printf("\nEnter province number (press ENTER to search): ");
	scanf("%d", &searchterm);
		
	search(p, searchterm);	
	
 	getch();
	return 0;
}

void search(struct person p[], int s)
{
	int i;
		
	for(i=0; i<5; i++)
	{
		if(s==p[i].a.province)
		{
			printf("\nName: %s Phone: %lld Province: %d District: %s Town: %s", p[i].name, 
			p[i].phone, p[i].a.province, p[i].a.district, p[i].a.town);
		}
	}
}


