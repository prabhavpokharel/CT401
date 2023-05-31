/*
WAP to read the radius of circle & calculate the area & circumference. Use symbolic 
constant to define the value of pie.
*/

#include <stdio.h>
#include <conio.h>

#define PI 3.14

int main()
{
    float r, area, cir;
    
    printf("Enter the radius of a circle: ");
    scanf("%f", &r);
    
    area = PI * r * r;
    cir = 2 * PI * r;
    
    printf("The area of a circle is %.2f & the circumference of a circle is %.2f", area, cir);
    
    getch();
    return 0;
 }
