#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4}, *ptr, i, ofset;
    ptr = a;
    printf("array using index value\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\npointer using index value\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\narray using ofset value\n");
    for (ofset = 0; ofset < 4; ofset++)
    {
        printf("%d ", *(a + ofset));
    }
    printf("\npointer using ofset value\n");
    for (ofset = 0; ofset < 4; ofset++)
    {
        printf("%d ", *(ptr + ofset));
    }
}