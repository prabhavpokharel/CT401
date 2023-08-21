//check if a number is prime or not

#include<stdio.h>

void main()
{
	int n,count=0,i=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			count++;
		}
		
	}
	if(count==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime");
	}
	
}


// void main()
// {
// 	int i, num;
	
// 	do{
// 		printf("Enter a number to check if it's prime: ");
// 		scanf("%d",&num);
// 	}while(num < 0 || num==0 || num==1);
	
// 	for(i=2; i<num; i++)
// 	{
// 		if(num%i == 0)
// 		{
// 			printf("\nThe given number is %d and it is not prime.",num);
// 			break;
// 		}
// 	}
// 	if(i==num)
// 		printf("\nThe given number is %d and it is prime.",num);
// }
