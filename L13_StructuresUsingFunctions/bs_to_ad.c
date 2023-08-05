#include<stdio.h>
#include<conio.h>

struct date
{
	int day, month, year;
};

void conv(struct date *, struct date *);

void main()
{
	struct date bs, ad;
	
	printf("Enter date in BS (YYYY MM DD): ");
	scanf("%d%d%d", &bs.year, &bs.month, &bs.day);
	
	conv(&bs, &ad);
	
	printf("Date (in AD): %d-%d-%d", ad.year, ad.month, ad.day);
	
	getch();
}

void conv(struct date *bs, struct date *ad)
{
	ad->day = bs->day - 16;
	if(ad->day<=0)
	{
		ad->day += 30;
		bs->month -= 1;
	}
	
	ad->month = bs->month - 8;
	if(ad->month<=0)
	{
		ad->month += 12;
		bs->year -= 1;
	}
	
	ad->year = bs->year - 56;
}

