/*WAP to print the sum of the following series
cos x = 1 - x^2/2! + x^4/4! - x^6/6! + ... */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
     int n, x, i, j, fact;
     float num, sign, sum=0;
     
     printf("Enter n: ");
     scanf("%d", &n);
     
     printf("Enter x: ");
     scanf("%d", &x);
     
     for(i=0; i<n; i++)
     {
              num = pow(x, 2*i);
              sign = pow(-1, i);
              fact = 1;
              
              for(j=1; j<=(2*i); j++)
              {    
                   fact = fact * j;
              }
                   
              sum = sum + (sign * num / fact);
     }
     
     printf("The sum of the series is %f", sum);
     
     getch();     
}
