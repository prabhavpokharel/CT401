/*
WAP to calculate area of a triangle.
Hint: area = sqrt(s*(s-a)*(s-b)*(s-c))
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    
    printf("Enter three sides of a triangle (i.e: a, b & c): ");
    scanf("%f%f%f", &a, &b, &c);   
    
    s = (a + b + c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c)); 
    
    printf("The area of a triangle is %.2f", area);
    
    getch();
    return 0;
 }
