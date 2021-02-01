#include <stdio.h>

double len(double radius);

int main()
{
  double rad, input;
  printf("Insert radius: ");
  scanf("%lf", &input);
  rad = len(input);
  printf("Lenght around: %lf", rad);
  return 0;
}
double len(double radius)
{
  double x = 2 * 3.14 * radius;
  return x;
}