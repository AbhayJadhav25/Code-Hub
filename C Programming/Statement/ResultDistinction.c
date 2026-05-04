// Calculate the average and display the Distinction class.
#include <stdio.h>
int main()
{
  double m1, m2, m3;
  double avg;
  printf("Enter Marks of three Subjects : ");
  scanf("%lf%lf%lf", &m1, &m2, &m3);

  if (m1 < 35 || m2 < 35 || m3 < 35)
  {
    printf("Fail");
    return 0;
  }

  avg = (m1 + m2 + m3) / 3;
  printf("Total Percentage = %.2lf\n", avg);

  if (avg >= 75)
  {
    printf("Class - I");
  }
  else if (avg >= 60)
  {
    printf("Class - II");
  }
  else if (avg >= 50)
  {
    printf("Class - III");
  }
  else
  {
    printf("Fail");
  }

  return 0;
}