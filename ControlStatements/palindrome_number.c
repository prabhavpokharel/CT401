#include<stdio.h>
int main()
{
	int num,pal = 0, rem,n;
	printf("Enter a number:");
	scanf("%d", &n);
	num = n;
	while(n>0)
	{
		rem = n%10;
		pal = pal * 10 + rem;
		n = n /10;
	}
	if(pal == num)
		printf(" %d is a palindrome number.", num);
	else
		printf(" %d is not a palindrome number.", num);	
	return 0;
}
