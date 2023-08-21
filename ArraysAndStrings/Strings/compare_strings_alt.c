#include<stdio.h>
int comp(char [],char []);
int main()
{
    char str1[15],str2[15];
    int d;
    printf("Enter the strings to be compared:");
    scanf("%s%s",str1,str2);
    d = comp(str1,str2);
    if(d<0)
    {
        printf("%s comes before %s",str1,str2);
    }
    else if(d>0)
    {
        printf("%s comes before %s",str2,str1);
    }
    else
    {
        printf("Both the strings are equal");
    }
    
    return 0;
}

int  comp(char str1[],char str2[])
{
    int  d,i;
    for(i=0; str1[i]!= '\0' || str2[i] != '\0' ; i++)
    {
        d = str1[i] - str2[i];
        if(d!=0)
        {
            return d;
        }
        return 0;
    }
}