#include<stdio.h>

int strcomp(char str1[], char str2[])
{
	int d=0,i=0;
	
	while(str1[i] != '\0' || str2[i] != '\0')
	{
		d = str1[i] - str2[i];
		if(d != 0)
			break;
		i++;
	}
	return d;
}

void main()
{
	char s1[20],s2[20];
	int d;
	
	printf("Enter the strings to compare: \n");
	gets(s1);
	gets(s2);
	
	d = strcomp(s1,s2);
	
	if(d == 0)
		printf("The given two strings s1 = %s and s2 = %s are same.",s1,s2);
	else if(d < 0)
		printf("The string s1 = %s comes first alphabetically than string s2 = %s.",s1,s2);
	else
		printf("The string s2 = %s comes first alphabetically than string s1 = %s.",s2,s1);
	
}
