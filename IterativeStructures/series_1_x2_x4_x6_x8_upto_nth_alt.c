#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, x, i, pwr=0, sum=0, term;
    
    printf("Enter nth term: ");
    scanf("%d", &n);
    
    printf("Enter base number: ");
    scanf("%d", &x);
    
    for(i=1; i<=n; i++)
    {
             term = pow(x,pwr);
             pwr = pwr + 2; 
             sum = sum + (pow(-1,i+1) * term);
    }
    
    printf("sum = %d", sum); 
    
    getch();    
}
