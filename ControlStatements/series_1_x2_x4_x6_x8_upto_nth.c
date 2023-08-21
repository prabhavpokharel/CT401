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
             
             if(i%2!=0)
             {
                       
                       sum = sum + term;  
             }else
             {
                       sum = sum - term;
             } 
    }
    
    printf("sum = %d", sum); 
    
    getch();    
}
