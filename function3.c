// function with return type with no arguments
#include <stdio.h>
int addition();
void main()
{

    int x = addition();
    printf("the sum 0f=%d", x);
}
int addition()
{
    int a, b, c;
    printf("enter the number");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
