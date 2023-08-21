//WAP to read two numbers and perform the operation based on the operator entered

#include<stdio.h>
#include<conio.h>

void main()
{
	char o;
	int a,b,res;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Enter an arithmetic operator: ");
	scanf(" %c",&o);
	switch(o)
    {
        case '+':
            res = a+b;
            printf("The result is %d", res);
            break;
        case '-':
            res = a-b;
            printf("The result is %d", res);
            break;
        case '*':
        	res = a*b;
            printf("The result is %d", res);
            break;
        case '/':
        	res = a/b;
            printf("The result is %d", res);
            break;
        default:
            printf("Enter a valid operator");
            break;

    }
    getch();
}
