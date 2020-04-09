#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int num,rank;
};
int main()
{
	struct student *stuptr,stu;
	stuptr=&stu;
	printf("Enter the student name : "); 
	scanf("%s",&stuptr->name);
	printf("Enter the student number : ");
	scanf("%d",&stuptr->num);
	printf("Enter the student rank : ");
	scanf("%d",&stuptr->rank);
	printf("\nStudent Details :\n");
	printf("\nStudent Name  : %s",stuptr->name);
	printf("\nStudent Number : %d",stuptr->num);
	printf("\nStudent Rank : %d",stuptr->rank);
	printf("\n");
	return 0;
}