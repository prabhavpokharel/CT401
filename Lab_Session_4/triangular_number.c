//WAP to check whether a given number is triangular or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int sum=0, triv, n=1;
    
    printf("Enter a number to check if it's triangular or not: ");
    scanf("%d", &triv);
    
    do
    {
        sum = sum + n;
        n++;
        
    }while(sum<triv);
    
    if(sum==triv)
    {
        printf("It is a triangular value.");
    }else
    {
        printf("It is not a triangular value.");
    }
    
    getch();
}
