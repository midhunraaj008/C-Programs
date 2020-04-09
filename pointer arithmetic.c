#include<stdio.h>
int main()
{
	int i,*ptr;
	int a[3];
	printf("Enter the values :\n");
	for(i=0;i<3;i++)
	{
       scanf("%d",&a[i]);
	}	
	ptr=a;
	for(i=0;i<3;i++)
	{
		printf("\nAddress of %d is %x",*ptr,ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}