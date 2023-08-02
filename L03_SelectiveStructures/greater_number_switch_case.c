//WAP to find greater between two distinct numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2;
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    switch(num1>num2)
    {
              case 1:
                   printf("%d is a greater number", num1);
                   break;
                   
              case 0:
                   printf("%d is a greater number", num2);
                   break;
                   
    }
    
    getch(); 
}
