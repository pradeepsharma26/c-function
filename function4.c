// function with return type with with arguments
#include <stdio.h>
int addition(int, int);
void main()
{
    int a, b;
    printf("enter the number");
    scanf("%d%d", &a, &b);
    int x = addition(a, b);
    printf("the sum 0f=%d", x);
}
int addition(int x, int y)
{
    int z = x + y;

    return z;
}
