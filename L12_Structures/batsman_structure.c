#include<stdio.h>
#include<conio.h>
#include<string.h>

struct batsman
{
	char name[30];
	int runs, dis;
	float avg;
}b[5];

int main()
{
	int i;
	char search[30];
	
	for(i=0; i<5; i++)
	{
		printf("\nBatsman: ");	
		fflush(stdin);
		scanf("%s", b[i].name);
		printf("Total runs & Number of dismissals: ");
		scanf("%d%d", &b[i].runs, &b[i].dis);
		
		b[i].avg = b[i].runs / (float)b[i].dis;
	}
	
	printf("\nSearch average of batsman \nEnter batsman name: ");	
	fflush(stdin);
	scanf("%s", search);
	
	for(i=0; i<5; i++)
	{
		if(strcmp(b[i].name, search)==0)
		{
			printf("Batsman: %s \nBatting Average: %f",b[i].name, b[i].avg);	
		}	
	}	
	
 	getch();
	return 0;
}


