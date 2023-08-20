/*WAP to input marks of 5 subjects physics, chemistry, biology, mathematics & computer. Calculate
percentage & grade according to following

Percentage >= 90% - Grade A     Percentage >= 80% - Grade B      Percentage >= 70% - Grade C
Percentage >= 60% - Grade D     Percentage >= 40% - Grade E      Percentage < 40% - Grade F*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float phy, che, bio, mat, com, per;
    
    printf("Enter marks of Physics, Cheistry, Biology, Mathematics & Computer: ");
    scanf("%f%f%f%f%f", &phy, &che, &bio, &mat, &com);
    
    per = ((phy+che+bio+mat+com)/400) * 100;
    
    (per>=90)? (printf("Grade A")) : (per>=80)? (printf("Grade B")) : (per>=70)? (printf("Grade C")) : (per>=60)? (printf("Grade D")) : (per>=40)? (printf("Grade E")) : (printf("Grade F"));
    
    getch(); 
}
