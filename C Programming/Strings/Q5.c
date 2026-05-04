/*Write a program that accepts names of n cities and write functions for the following:
a. Search for a city
b. Displays the longest string
c. Sorts the names*/

#include <stdio.h>
#include <string.h>
int main()
{
  char cities[10][50], temp[50], search[50];
  int n, isFound = 0;

  printf("Enter number of cities : ");
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++)
  {
    printf("Enter name of %d city : ", i + 1);
    gets(cities[i]);
  }

  printf("Enter Name of city to Search : ");
  gets(search);

  for (int i = 0; i < n; i++)
  {
    if (strcmpi(cities[i], search) == 0)
    {
      isFound = 1;
    }
  }
  if (isFound)
  {
    printf("City Found\n");
  }
  else
  {
    printf("City Not Found");
  }

  int max = 0;
  for (int i = 1; i < n; i++)
  {
    if (strlen(cities[i]) > strlen(cities[max]))
      max = i;
  }
  printf("Longest City Name : %s \n", cities[max]);

  printf("Sorted List of cities : \n ");
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (strcmp(cities[i], cities[j]) > 0)
      {
        strcpy(temp, cities[i]);
        strcpy(cities[i], cities[j]);
        strcpy(cities[j], temp);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", cities[i]);
  }
  return 0;
}
