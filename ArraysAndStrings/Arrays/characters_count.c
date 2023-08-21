#include<stdio.h>

int main()
{
	int i,vowels = 0, consonants = 0,white_spaces = 0;
	int digits = 0,special_characters = 0;
	char str[100];
	
	printf("Enter any string:");
	gets(str);
	
	for(i=0 ; str[i]!='\0' ;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
			||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
				vowels++;
		
		else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
			consonants++;
		
		else if(str[i]>='0' && str[i]<='9')
			digits++;
			
		else if(str[i] == ' ')
			white_spaces++;
			
		else
			special_characters++;
	}
	
	printf("Vowels:%d\nConsonants:%d\nWhite Spaces:%d\nDigits:%d\nSpecial Characters:%d",
	vowels,consonants,white_spaces,digits,special_characters);

	return 0;
}
