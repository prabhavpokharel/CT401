#include<stdio.h>
#include<conio.h>

int compare(char[], char[]);

void main()
{
	int res;
	char name1[20], name2[20];
	
	printf("Enter any two names: ");
	scanf("%s%s", name1, name2);
	
	res = compare(name1, name2);
	
	if(res==0)
		printf("\n%s and %s are same", name1, name2);
	else if(res>0)
		printf("\n%s comes before %s", name2, name1);
	else
		printf("\n%s comes before %s", name1, name2);
	
	getch();
}

int compare(char n1[], char n2[])
{
	int i, diff;
	
	for (i=0; n1[i] != '\0' || n2[i] != '\0'; i++)
	{
		diff = n1[i]-n2[i];
		
		if(diff>0 || diff<0)
			break;
	}
	return diff;
}

