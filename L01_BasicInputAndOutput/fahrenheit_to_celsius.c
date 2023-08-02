/*
WAP to read temperature in Fahrenheit & convert it into Celsius
Hint: F = (C x 9/5) + 32
f = 212 & c = 100
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float ft, cs;
    
    printf("enter the temperature in fahrenheit: ");
    scanf("%f", &ft);
    
    cs = (ft - 32) * (5.0/9);
    
    printf("%.2f F = %.2f C", ft, cs);
    
    getch();
    return 0;
 }
