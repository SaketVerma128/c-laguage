#include <stdio.h>
int main()
{
    int *ptr = (int *)1000;
    printf("Old Value of ptr : %u\n", ptr);
    ptr = ptr + 1;
    printf("New Value of ptr : %u", ptr);
    return 0;
}