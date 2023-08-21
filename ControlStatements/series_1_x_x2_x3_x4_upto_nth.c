// sum of series 1 + x + x^2 + x^3 + x^4 +.....+ nth term
#include<stdio.h>
#include<math.h>
int main()
{
    int i, term , sum =0,n,x;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        term = pow(x,i);
        sum += term;
    } 
    printf("The sum is %d",sum);
    return 0;
}