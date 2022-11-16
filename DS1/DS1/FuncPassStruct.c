/* Passing Structure to Function*/

#include <stdio.h>


struct Emp_details
{
char Name[20];
int Bas_Salary;
int num_ofDays;
int Tot_Salary;
};


void Get_Empdetails(struct Emp_details *Gemp)
{
        int a,b;
	printf("Please enter Employee details\n 1.EmployeeName \n 2.Base Salary \n 3. num of days\n");
	scanf("%s %d %d",Gemp->Name,&Gemp->Bas_Salary,&Gemp->num_ofDays);
//	Gemp->Bas_Salary = a;
//	Gemp->num_ofDays = b;
	Gemp->Tot_Salary = Gemp->Bas_Salary * Gemp->num_ofDays;
};


void print_Empdetails(struct Emp_details *Pemp)
{
	printf("\nEmployee Name is %s",Pemp->Name);
	printf("\nEmployee Base salary is %d",Pemp->Bas_Salary);
	printf("\nEmployee Num of Days Present is %d",Pemp->num_ofDays);
	printf("\nEmployee Total Salary is %d\n",Pemp->Tot_Salary);
}


int main()
{
static struct Emp_details Emp1,emp1[20];
int i=0,j=0;
	printf("please enter your options to \n 1:Enter student details \n 2:Print stdent details\n 3.to quit\n");
	scanf("%d",&i);

	while(1)
	{
 	if(i==1)
	{
	Get_Empdetails(&Emp1);
	}
	else if(i==2)
	{
	 print_Empdetails(&Emp1);
	} 
	else
	{ 
	 printf("\n Bye.. Byee \n");
	exit(0);
	}
	}
}
