#include <stdio.h>
main()
{
    int n;
    printf("enter n value\n");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d is even number\n", n) : printf("%d is odd number\n", n);
}
