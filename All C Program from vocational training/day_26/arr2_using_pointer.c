#include <stdio.h>
void main()
{
    int arr[3] = {1, 2, 3};
    int i, *ptr[3];
    for (i = 0; i < 3; i++)
        ptr[i] = arr + i;
    for (i = 0; i < 3; i++)
        printf("%p %d\n", ptr[i], *ptr[i]);
}