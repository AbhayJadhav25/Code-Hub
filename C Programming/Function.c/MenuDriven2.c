// Accept X & Y coordinates of two points and write a menu driven program to perform the operations.
#include <stdio.h>
#include <math.h>
int getquadrant(double x, double y)
{
  if (x > 0 && y > 0)
    return 1;
  if (x < 0 && y > 0)
    return 2;
  if (x < 0 && y < 0)
    return 3;
  if (x > 0 && y < 0)
    return 4;
  return 0;
}
int main()
{
  double x1, x2, y1, y2;
  printf("Enter value of X coordinates : ");
  scanf("%lf%lf", &x1, &x2);

  printf("Enter value of Y coordinates : ");
  scanf("%lf%lf", &y1, &y2);
  int choice;
  do
  {
    printf("1)Find Distance between two points\n2)Slope of the line between the points]\n3)Check whether they lie in the same quadrant\n:Exit\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
      double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
      printf("Distance between two poits : %.2lf\n", distance);
      break;
    }
    case 2:
    {
      if (x2 - x1 == 0)
      {
        printf("Slope can't be defined\n");
      }
      else
      {
        double slope = (y2 - y1) / (x2 - x1);
        printf("Slope of the line between two points : %.2lf\n", slope);
      }
      break;
    }
    case 3:
    {
      int q1 = getquadrant(x1, y1);
      int q2 = getquadrant(x2, y2);
      if (q1 != 0 && q2 != 0 && q1 == q2)
      {
        printf("Both points are lie in the same quadrant (Quadrant : %d)\n", q1);
      }
      else if (q1 == 0 || q2 == 0)
      {
        printf("One or both of the poinnts liie on an axis or at the same oriigin , quadrant check is not possible.\n");
      }
      else
      {
        printf("The point do not lie in the same quadrant\n");
      }
      break;
    }
    case 4:
    {
      printf("Exiting the program..\n");
      break;
    }
    default:
      printf("Invalid choice\n");
      break;
    }
  } while (choice != 4);
  return 0;
}