#include<stdio.h>
 int main()
 {
     int num, sum = 0, count = 0;
     float avg;
     printf("Enter any number\n");
     while(1)
     {
        scanf("%d",&num);
        if(num == 0)
        {
            break;  
        }
        if(num%2 ==0)
        {
            sum += num;
            count += 1;
        }
     }
     avg = (float) sum/count;
     printf("The average is %f\n",avg);
     return 0;
 }