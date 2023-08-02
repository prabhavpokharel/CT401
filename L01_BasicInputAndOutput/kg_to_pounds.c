/*
WAP to convert weight in kg to weight in pounds.
Hint: 1 kg = 2.2 pounds
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float w, pounds;
    
    printf("Enter the weight (in kg): ");
    scanf("%f", &w);   
    
    pounds = w * 2.2;
    
    printf("The weight %.2f kg = %.2f pounds", w, pounds);
    
    getch();
    return 0;
 }
