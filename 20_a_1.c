#include<stdio.h>


struct employee{
	
	char name[1];
	
	int working_hours;

	int salary;

};

void main(){

	struct employee e1;

	printf("Enter name of employee : ");
	scanf("%[^\n]%*c", e1.name);

	printf("Enter working hours of employee : ");
	scanf("%d", e1.working_hours);

	printf("Enter salary of employee : ");
	scanf("%d", e1.salary);

}