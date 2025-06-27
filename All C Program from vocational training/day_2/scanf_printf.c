#include <stdio.h>
main()
{
    int a, b;
    float c, d;
    printf("enter 2 integer values\n");
    scanf("%d%d", &a, &b);
    printf("enter 2 float values\n");
    scanf("%f%f", &c, &d);
    printf("Integer Arithmetic %d/%d=%d\n", a, b, a / b);
    printf("real Arithmetic %f/%f=%f\n", c, d, c / d);
    printf("Mixed mode Arithmetic %f/%d=%f\n", c, b, c / b);
}