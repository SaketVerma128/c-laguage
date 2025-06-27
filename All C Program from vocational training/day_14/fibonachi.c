#include <stdio.h>
int fibo(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return fibo(a - 1) + fibo(a - 2);
    }
}
int main()
{
    int a, result;
    printf("enter the number for fibonachi series\n");
    scanf("%d", &a);

    result = fibo(a);
    printf("the sum of fibonachi series is %d\n", result);
}