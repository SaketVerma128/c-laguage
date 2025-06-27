#include <stdio.h>
main()
{
    int a, n;
    printf("enter a value\n");
    scanf("%d", &a);
    n = a++;
    printf("a=%d\tn=%d\n", a, n);
    n = ++a;
    printf("a=%d\tn=%d\n", a, n);
    n = a--;
    printf("a=%d\tn=%d\n", a, n);
    n = --a;
    printf("a=%d\tn=%d\n", a, n);
}