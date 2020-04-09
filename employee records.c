#include<stdio.h>
struct records
{
	int emp_id,salary;
	char name[50],address[100],designation[50];
}employee[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the Employee %d Details :",i+1);
		printf("\nEnter the Employee ID : ");
		scanf("%d",&employee[i].emp_id);
		printf("Enter the Employee Name : ");
		scanf("%s",&employee[i].name);
		printf("Enter the Employee Designation : ");
		scanf("%s",&employee[i].designation);
		printf("Enter the Employee Address : ");
		scanf("%s",&employee[i].address);
		printf("Enter Employee Salary : ");
		scanf("%d",&employee[i].salary);
	}
for(i=0;i<3;i++)
	{
		printf("\n\nEmployee %d Details :",i+1);
		printf("\nEmployee ID : %d",employee[i].emp_id);
		printf("\nEmployee Name : %s",&employee[i].name);
		printf("\nEmployee Designation : %s",&employee[i].designation);
		printf("\nEmployee Address : %s",&employee[i].address);
		printf("\nEmployee Salary : %d",&employee[i].salary);
	}
	return 0;
}