//WAP to input any character & check whether it is alphabet, digit or special character

#include <stdio.h>
#include <conio.h>

int main()
{
    char c;
    
    printf("Enter any character: ");
    c = getchar();
    
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
       printf("It is character");
    }
    else if (c>='0' && c<='9')
    {
        printf("It is digit");  
    }
    else
    {
         printf("It is special character"); 
    }
    
    getch(); 
}
