/* To print the following pattern:
                N
              e e e
            P P P P P
          a a a a a a a
        L L L L L L L L L 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int len,i,j,k;
    char str[6] = "NEPAL";
    len = strlen(str);
    for (i=0 ; i<=(len-1) ; i++) //for row
    {
        for (j=1;j<=(len - i - 1) ; j++)  // for space
        {
            printf("  ");
        }
        for (k=1 ; k<=(2*i + 1) ; k++)
        {
            if(i%2 == 0)
            {
                printf("%c ",str[i]);
            }
            else
            {
                printf("%c ",str[i] + 32);
            }
        }
        printf("\n");

    }

    return 0;
}