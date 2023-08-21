#include<stdio.h>
#include<string.h>
struct batsman
{
   char name[15];
   int runs;
   int dis;
   float avg; /* data */
};
int main()
{
    struct batsman b[5];
    char bname[15];
    int i;
    printf("Enter the details of 5 players:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter name:");
        scanf("%s",b[i].name);
        printf("Enter runs:");
        scanf("%d",&b[i].runs);
        printf("Enter Number of dismissals:");
        scanf("%d",&b[i].dis);

        b[i].avg =(float) b[i].runs/b[i].dis;
    }
    printf("Enter the name of the player whose batting average is to be displayed:");
    scanf("%s",bname);
    for(i=0;i<5;i++)
    {
        if(strcmp(bname,b[i].name) == 0)
        {
            printf("The batting avg of %s is %f",bname,b[i].avg);
            break;
        }
    }
    return 0;
}
