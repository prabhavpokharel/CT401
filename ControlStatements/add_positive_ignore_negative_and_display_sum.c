/*Program to add only positive number and ignore -ve numbers and display sum
 when -1 is entered*/
 
 #include<stdio.h>

 
 int main()
 {
 	int val, sum = 0;
 	printf("input: ");
 	while(1)
 	{
 		scanf("%d",&val);
 		if(val==-1)
		{
			break;
		}
 		if(val<0)
 		{
			continue;
		}	
		sum += val;	
	}
	printf("the sum is %d",sum);
	return 0;

 }
