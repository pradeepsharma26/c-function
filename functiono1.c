// function with no return no arguments
#include <stdio.h>
void addition();
int main()
{
    addition();
}
void addition()
{
    int a, b, c;
    printf("enter the number ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum=%d\n", c);
}
