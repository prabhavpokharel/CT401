

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int vcount=0, ccount=0, wscount=0, dcount=0, sccount=0, i;
	char str[100];
	
	printf("What's on your mind?\n");
	gets(str);
	strlwr(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			vcount++;
		}else if(str[i] >= 'a' && str[i] <= 'z')
		{
			ccount++;
		}else if(str[i] == ' ')
		{
			wscount++;
		}else if(str[i] >= '0' && str[i] <= '9')
		{
			dcount++;
		}else
		{
			sccount++;
		}
	}
	
	printf("\nVowels = %d\nConsonants = %d\nWhite Space = %d\nDigits = %d\nSpecial Characters = %d", vcount, ccount, wscount, dcount, sccount);
	
	
	getch();
}

