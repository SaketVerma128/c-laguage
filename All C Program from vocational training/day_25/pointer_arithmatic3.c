#include <stdio.h>
int main()
{
    float *ptr1 = (float *)1000;
    float *ptr2 = (float *)2000;
    printf("\nDifference : %d\n", ptr2 - ptr1);
    return 0;
}