//WAP to input angles of a triangle & check whether triangle is valid or not

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;
    
    printf("Enter angles of a triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a+b+c == 180)
    {
       printf("It is valid");
    }
    else
    {
        printf("It is not valid");  
    }
    
    getch(); 
}
