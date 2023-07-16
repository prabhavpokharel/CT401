/*WAP to take inputs from user until user enters 0 and compute average of even numbers entered by the user
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, count=0, sum=0;
    float avg;
    
    do
    {
       printf("Enter any number: ");
       scanf("%d", &num);
       
       if(num%2==0)
       {
                   count = count + 1;
                   sum = sum + num;
       }
    }while(num!=0); 
    
    avg = (float)sum/(count-1);
       
    printf("The average of even numbers is %f", avg);
    
    getch();
}
