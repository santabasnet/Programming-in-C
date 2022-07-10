/* Function pointer, and typedef */

#include <stdio.h>

int Sum(int a, int b)
{
    return (a+b);
}

int main()
{
    typedef int (*SumPtr)(int, int);
    SumPtr obj = &Sum;
    int x = 20, y = 30;
    printf("Sum (x, y) = %d", obj(x, y));

    return(1);
}
