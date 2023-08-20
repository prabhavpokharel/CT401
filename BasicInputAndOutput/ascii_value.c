#include <stdio.h>
#include <conio.h>

int main()
{
    char c;
    
    printf("enter a character: ");
    scanf("%c",&c);
    
    printf("the ascii value of %c is %d", c, c);
    
    getch();
    return 0;
 }
