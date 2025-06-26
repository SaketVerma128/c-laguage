#include <stdio.h>
main()
{
    int marks, a, b;
    printf("enter marks\n");
    scanf("%d", &marks);
    printf("enter 2 int values\n");
    scanf("%d%d", &a, &b);
    printf("marks>=90 && marks<=100: %d\n", marks >= 90 &&
                                                marks <= 100);
    printf("a>=b || b>=a=%d\n", a >= b || b >= a);
    printf("!a=%d\n", !a);
}