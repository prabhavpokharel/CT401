#include<stdio.h>
#include<math.h>
int armstrong(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return (pow(x%10,3) + armstrong(x/10));
    }
}

int main()
{
    int n,a;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    a=armstrong(n);
    if(a==n)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
    return 0;
}

