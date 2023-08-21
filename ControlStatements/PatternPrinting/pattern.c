/* To print the following pattern:
                1
            2   3   2
        3   4   5   4   3
    4   5   6   7   6   5   4
5   6   7   8   9   8   7   6   5
.............n lines...............     */

#include<stdio.h>

int main()
{
    int i,j,k,l,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" \t");
        }
        for(k=i;k<=(2*i-1);k++)
        {
            printf("%d\t",k);
        }
        for(l=(2*i-2);l>=i;l--)
        {
            printf("%d\t",l);
        }
        printf("\n");
    }
    return 0;
}