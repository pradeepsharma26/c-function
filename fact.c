// return  type with argument;
#include <stdio.h>
int fact(num);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    int x = fact(num);
    printf("the factorial%d\n", x);
}
int fact(int x)
{
    int i, fact = 1;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
