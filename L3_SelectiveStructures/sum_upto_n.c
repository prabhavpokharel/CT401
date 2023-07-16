//WAP to read a number from user & print the sum upto that number

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, sum=0;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    for (i=num; i>=1; i--)
    {
        sum = sum + i;    
    }
    
    printf("Sum = %d", sum);
    
    getch();
}
 
