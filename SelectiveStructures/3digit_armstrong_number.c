//Check if any 3-digit number is an Armstrong number

#include <stdio.h>
#include <math.h>

int main() {
   	int num, n, r, sum = 0;

   	printf("Enter an integer: ");
   	scanf("%d", &num);   	
   	n = num;
   	while(n!=0)
	{
		r = n % 10;	
		sum = sum + pow(r,3);	
		n = n / 10;
	}
	
   	if (sum == num)
    	printf("%d is an Armstrong number.", num);
   	else
    	printf("%d is not an Armstrong number.", num);

}
