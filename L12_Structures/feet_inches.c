#include<stdio.h>
#include<conio.h>
#include<math.h>

struct length
{
	int feet;
	int inch;
};

int main()
{
	struct length l1, l2, sum, diff;
	int l1in, l2in;	
	
	printf("Enter length 1 in ft and in: ");
	scanf("%d%d", &l1.feet, &l1.inch);
	printf("Enter length 2 in ft and in: ");
	scanf("%d%d", &l2.feet, &l2.inch);
	
	l1in = l1.feet*12 + l1.inch;
	l2in = l2.feet*12 + l2.inch;
	
	sum.inch = l1in + l2in;
	diff.inch = abs(l1in - l2in);
	
	sum.feet = sum.inch/12;
	sum.inch = sum.inch%12;
	diff.feet = diff.inch/12;
	diff.inch = diff.inch%12;
	
	printf("\nSum = %d ft %d in \nDifference = %d ft %d in", sum.feet, sum.inch, diff.feet, diff.inch);
	
 	getch();
 	return 0;
}


