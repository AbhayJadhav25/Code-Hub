// Calculate the tax based on the salary
#include <stdio.h>
int main()
{
  double basicSalary, iTax;
  printf("Enter Empolyee Salary : ");
  scanf("%lf", &basicSalary);

  if (basicSalary < 150000)
  {
    iTax = basicSalary * 0;
  }
  else if (basicSalary > 150000 && basicSalary < 300000)
  {
    iTax = basicSalary * 0.2;
  }
  else
  {
    iTax = basicSalary * 0.3;
  }

  printf("Income Tax = %.2lf ", iTax);

  return 0;
}