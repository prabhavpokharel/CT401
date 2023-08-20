/*WAP to display the given sequence upto nth terms
1,2,5,10,17,26...nth term*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, o=1, odd=1;
    
    printf("Enter nth term: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
             printf("%d\t", o);
             o = o + odd;
             odd = odd + 2;     
    }
    
    getch(); 
}
