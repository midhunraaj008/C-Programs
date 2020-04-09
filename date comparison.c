#include<stdio.h>
struct comp
{
	int date,month,year;
}store[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter date %d :",i+1);
		scanf("%d",&store[i].date);
		printf("Enter month %d :",i+1);
		scanf("%d",&store[i].month);
		printf("Enter Year %d :",i+1);
		scanf("%d",&store[i].year);
	}
	if((store[0].date==store[1].date)&&(store[0].month==store[1].month)&&(store[0].year==store[1].year))
	printf("\nThey are equal\n");
	else
	printf("\nThey are not equal\n");
	return 0;
}