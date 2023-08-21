#include<stdio.h>
#include<string.h>

void alphabetic(char word[][15],int n)
{
	int i,j;
	char temp[15];
	for( i=0 ; i<n-1 ; i++)
	{
		for( j= i+1 ; j<n ; j++)
		{
			d = strcmp(word[i],word[j])
			if(d > 0) //(a[i] > a[j])
			{
				//swap
				strcpy(temp,word[i]);	//temp = a[i]
				strcpy(word[i],word[j]);	//a[i] = a[j]
				strcpy(word[j],temp);	//a[j] = temp
			}
		}
	}
	
	printf("\nAlphabetical order:\n")
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i]);
	}
}

void main()
{
	char word[15][15];
	int n,i;
	printf("Enter the number of words:");
	scanf("%d", &n);
	
	printf("Enter the words:\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%s",word[i]);
	}
	
	alphabetic(word,n);
}

