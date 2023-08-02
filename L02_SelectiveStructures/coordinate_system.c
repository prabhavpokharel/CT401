/* WAP that reads a coordinate point of rectangular coordinate system & displays the appropriate 
message after checking where the point lies on coordinate system*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    
    printf("Enter x & y co-ordinates: ");
    scanf("%d %d", &x, &y);
    
    if(x==0 && y==0)
    {
            printf("The point (%d,%d) lies in the origin.", x,y);
    }
    else if(x!=0 && y==0)
    {
         if(x>0)
         {
                printf("The point (%d,%d) lies in positive x-axis.", x,y);
         }
         else
         {
             printf("The point (%d,%d) lies in negative x-axis.", x,y);
         } 
    }
    else if(x==0 && y!=0)
    {
         if(y>0)
         {
                printf("The point (%d,%d) lies in positive y-axis.", x,y);
         }
         else
         {
             printf("The point (%d,%d) lies in negative y-axis.", x,y);
         }
    }
    else if(x>0 && y>0)
    {
         printf("The point (%d,%d) lies in first quadrant.", x,y);
    }
    else if(x<0 && y>0)
    {
         printf("The point (%d,%d) lies in second quadrant.", x,y);
    }
    else if(x<0 && y<0)
    {
         printf("The point (%d,%d) lies in third quadrant.", x,y);
    }
    else
    {
        printf("The point (%d,%d) lies in forth quadrant.", x,y);
    }
    
    getch();
 }
 
