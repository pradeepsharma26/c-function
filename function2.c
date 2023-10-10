// function with arguments and no return type
#include <stdio.h>
void addition();
int main()
{
    ;
    int a, b;
    printf("enter the number");
    scanf("%d%d", &a, &b);
    addition(a, b);
}
void addition(int x, int y)
{

    int z = x + y;
    printf("sum=%d\n", z);
}
