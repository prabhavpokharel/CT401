/*program toprint the following pattern
            1
        1   2   1
    1   2   3   2   1
 1  2   3   4   3   2   1
 .........n lines.............*/

#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" \t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t",k);
        }
        for(l=(i-1);l>=1;l--)
        {
            printf("%d\t",l);
        }
        printf("\n");
    }
}
