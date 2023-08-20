#include<stdio.h>
#include<conio.h>

struct TIME
{
	int hr, min, sec;
};

void sumdiff(struct TIME, struct TIME, struct TIME *, struct TIME *);

void main()
{
	struct TIME start, stop, sum, diff;
	
	printf("Enter start time (HR_MIN_SEC): ");
	scanf("%d%d%d", &start.hr, &start.min, &start.sec);
	printf("Enter stop time (HR_MIN_SEC): ");
	scanf("%d%d%d", &stop.hr, &stop.min, &stop.sec);
	
	sumdiff(start, stop, &sum, &diff);
	
	printf("\nSum = %d hr %d min %d sec", sum.hr, sum.min, sum.sec);
	printf("\nDifference = %d hr %d min %d sec", diff.hr, diff.min, diff.sec);
	
	getch();
}
void sumdiff(struct TIME st, struct TIME sp, struct TIME *sum, struct TIME *diff)
{
	long int t, t1, t2;
	
	t1 = (st.hr*3600) + (st.min*60) + st.sec;
	t2 = (sp.hr*3600) + (sp.min*60) + sp.sec;
	
	t = t1 + t2;
	sum->hr = t/3600;
	sum->min = (t%3600)/60;
	sum->sec = (t%3600)%60;
	
	t = t2 - t1;
	diff->hr = t/3600;
	diff->min = (t%3600)/60;
	diff->sec = (t%3600)%60;
}


