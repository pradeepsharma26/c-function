// function with return type and arguments
// find the power ?
#include <stdio.h>
int power(int, int);
int main()
{
  int pov, num;
  printf("enter the number");
  scanf("%d", &num);

  printf("enter the power");
  scanf("%d", &pov);

  int f = power(num, pov);
  printf("the power are%d", f);
}
int power(int x, int y)
{
  int i, f = 1;
  for (i = 1; i <= y; i++)
  {
    f = f * x;
  }
  return f;
}
__