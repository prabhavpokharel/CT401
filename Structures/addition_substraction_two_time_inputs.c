/*WAP to manipulate time structure containing hours, minutes and second as its members and 
make functions to add and subtract the two input times.*/

#include<stdio.h>
#include<conio.h>

typedef struct time
{
	int hr,min,sec;
}time;

time sum(time t1, time t2)
{
	time res;
	res.hr = t1.hr + t2.hr;
	res.min = t1.min + t2.min;
	res.sec = t1.sec + t2.sec;
	while(res.sec >= 60)
	{
		res.sec -= 60;
		res.min++;
	}
	while(res.min >= 60)
	{
		res.min -= 60;
		res.hr++;
	}
	return res;
}

void diff(time t1,time t2, time *res)
{
	t1.sec = t1.hr * 3600 + t1.min * 60 + t1.sec;
	t2.sec = t2.hr * 3600 + t2.min * 60 + t2.sec;
	
	res->sec = (t1.sec>t2.sec)?(t1.sec-t2.sec):(t2.sec-t1.sec); //abs(t1.sec-t2.sec)
	res->min = res->sec/60;
	res->sec = res->sec%60;
	res->hr = res->min/60;
	res->min = res->min%60;
	
}

void main()
{
	time t1,t2,s,d;
	
	printf("Enter time t1(hr,min,sec): ");
	scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
	printf("Enter time t2(hr,min,sec): ");
	scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
	
	s = sum(t1,t2);
	diff(t1,t2,&d);
	
	printf("The sum of time results in %d hours, %d minutes and %d seconds.\n",s.hr,s.min,s.sec);
	printf("The difference between the two time periods is ");
	printf("%d hours, %d minutes and %d seconds.",d.hr,d.min,d.sec);
	
}
