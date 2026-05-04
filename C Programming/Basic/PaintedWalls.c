// Print the area of painted(interior walls) and area to be whitewashed(roof)
#include <stdio.h>
int main()
{
  int l, b, h;
  printf("Enter length , breadth , height of room : ");
  scanf("%d%d%d", &l, &b, &h);

  int ld, bd;
  printf("Enter length and breadth of door : ");
  scanf("%d%d", &ld, &bd);

  int lw, bw;
  printf("Enter length and breadth of window : ");
  scanf("%d%d", &lw, &bw);

  int wallArea = 2 * (l * h) + 2 * (b * h);
  int doorArea = ld * bd;
  int windowArea = 2 * (lw * bw);
  int notPaint = doorArea + windowArea;

  int paintArea = wallArea - (doorArea + windowArea);

  int roofArea = l * b;

  printf("Area to Painted : %d\n", paintArea);
  printf("Whitewashed Roof Area : %d", roofArea);

  return 0;
}