/* WAP to find taxable amount of an employee
a. no tax upto 1,00,000 per annual income
b. 15% tax for 1,00,000 to 1,75,000 per annum
c. 25% for greater than 1,75,000 per annum*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int sal;
    float tx;
    
    printf("Enter your salary: ");
    scanf("%d", &sal);
    
    if(sal<=100000)
    {
            printf("Your taxable amount is Rs. 0");
    }
    else if(sal>100000 && sal<=175000)
    {
         tx = (sal-100000)*0.15;
         printf("Your taxable amount is Rs. %f", tx);
    }
    else
    {
        tx = (sal-175000)*0.25 + (0.15*75000);
         printf("Your taxable amount is Rs. %f", tx);
    }
    
    getch();
 }
 
