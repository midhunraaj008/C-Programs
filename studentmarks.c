#include<stdio.h>
struct marks
{
	int tcs,cpp,ldc,feee,phy,total;
}student[3];
int main()
{
	int i=0;
	for(i;i<3;i++)
	{
		printf("\nEnter the tcs  mark of student %d : ",i+1);
		scanf("%d",&student[i].tcs);
		printf("Enter the cpp  mark of student %d : ",i+1);
		scanf("%d",&student[i].cpp);
		printf("Enter the ldc  mark of student %d : ",i+1);
		scanf("%d",&student[i].ldc);
		printf("Enter the feee mark of student %d : ",i+1);
		scanf("%d",&student[i].feee);
		printf("Enter the phy  mark of student %d : ",i+1);
		scanf("%d",&student[i].phy);
		
	}
	for(i=0;i<3;i++)
	{
		student[i].total=student[i].tcs+student[i].cpp+student[i].ldc+student[i].feee+student[i].phy;
		printf("The Total Marks scored by student %d is %d\n",i+1,student[i].total);
	}
	return 0;
}