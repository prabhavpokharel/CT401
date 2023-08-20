//Check if any n-digit number is an Armstrong number

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
   	int num, n, r, digit = 0, sum = 0;

   	printf("Enter an integer: ");
   	scanf("%d", &num);

   	n = num;

   	// store the number of digits of num in digit
   	for (n = num; n != 0; digit++) {
       n /= 10;
   	}
   
	n = num;
   	while(n>0)
	{
		r = n % 10;
		sum = sum + pow(r,digit);
		n = n / 10;
	}

   	if (sum == num)
    	printf("%d is an Armstrong number.", num);
   	else
    	printf("%d is not an Armstrong number.", num);
    getch();
}
