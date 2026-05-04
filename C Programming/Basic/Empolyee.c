// Home salary of the empolyee including house rent , dearness allowance , deducated professional tax.
#include <stdio.h>
int main()
{
  int emp_id;
  int basic_salary;
  printf("Enter Empolyee Id : ");
  scanf("%d", &emp_id);

  printf("Enter Basic Salary of Empolyee %d : ", emp_id);
  scanf("%d", &basic_salary);

  int houseRent = basic_salary * 0.1;
  int dearnessAllowance = basic_salary * 0.3;
  int tax = basic_salary * 0.05;

  int homeSalary = basic_salary + houseRent + dearnessAllowance - tax;

  printf("---Salary Slip---\n");
  printf("Empolyee ID         : %d\n", emp_id);
  printf("Basic Salary        : %d\n", basic_salary);
  printf("House Rent          : %d\n", houseRent);
  printf("Dearness Allowance  : %d\n", dearnessAllowance);
  printf("Prof. Tax           : %d\n", tax);
  printf("Total salary        : %d\n", homeSalary);
  printf("----------------------------------------------");
  return 0;
}