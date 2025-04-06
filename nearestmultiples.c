// the largest and smaller multiples of positive numbers
#include <stdio.h>
int nearestMultiple(int m, int n);
int getnumbers(int n, int m)
{
  do
  {
    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter m:");
    scanf("%d", &m);
    if (n < 0 || m < 0)
    {
      printf("Enter positive numbers:)\n");
    }
    else
    {
      nearestMultiple(m, n);
    }
  } while (n < 0 || m < 0);
}
int main()
{
  int m;
  int n;
  getnumbers(n, m);
}
int nearestMultiple(int m, int n)
{
  int numL;
  int numS;
  int remainder;
  remainder = n % m;
  numL = (n + m) - remainder;
  if (remainder == 0)
  {
    numS = n - m;
  }
  else
  {
    numS = n - remainder;
  }
  printf("the larger and smaller multiples respectively are %d and %d\n", numL, numS);
}
