#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z, a, b, c;
    
    printf("enter three numbers (i.e. x, y & z): ");
    scanf("%f %f %f", &x, &y, &z);
    
    a = x + fabs(y - z);
    b = asin(sqrt((pow(x, 2)+ pow(y, 2))/z));
    c = pow(fabs(x - z), 4.0/3);
    
    printf("value of a, b and c are %f %f %f respectively", a, b, c);
    
    getch();
    return 0;
    
 }
