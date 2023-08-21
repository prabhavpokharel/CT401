//Sine series 
// sin(x) = x - x^3/3! + x^5/5! + .....

#include <stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
    int i,n,j,sign,fact;
    float x,nume,deno,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%f",&x);
    x = x*pi / 180;
    for(i=1;i<=n;i++)
    {
        nume = pow(x,2*i-1);
        fact = 1;
        for(j=1;j<=(2*i-1);j++)
        {
            fact = fact * j;
        }
        deno = fact;
        sign = pow(-1,i+1);
        sum = sum + (sign*nume)/deno;
    }
    printf("The sum of the sine series is %f",sum);
    return 0;
}
