//Programs to count the numbers of characters and words in the given text using pointer.
#include<stdio.h>
int main()
{
    char str[50];
    int i,space = 0, characters = 0;
    printf("Enter the line of text:\n");
    gets(str);
    for( i=0 ; *(str+i) != '\0' ; i++ )
    {
        characters++;
        if( *(str+i) == ' ')
        {
            space++;
        }
    }
    printf("The total words are : %d\n", space+1 ); //There always will be space+1 number of words in a sentence.
    printf("The total characters are : %d\n", characters );
    return 0;
}