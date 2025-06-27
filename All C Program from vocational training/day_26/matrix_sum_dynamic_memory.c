#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1, *ptr2, *ptr3, size;
    printf("enter the size of 1d matrix\n");
    scanf("%d", &size);
    ptr1 = (int *)malloc((size) * sizeof(int));
    ptr2 = (int *)malloc((size) * sizeof(int));
    ptr3 = (int *)malloc((size) * sizeof(int));

    printf("first 1d matrix\n");
    for (int i = 0; i < (size); i++)
    {
        printf("enter the value for element A[%d] ", i + 1);
        scanf("%d", (ptr1 + i));
    }
    printf("second 1d matrix\n");
    for (int i = 0; i < (size); i++)
    {
        printf("enter the value for element B[%d] ", i + 1);
        scanf("%d", (ptr2 + i));
    }
    for (int i = 0; i < size; i++)
    {
        *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
    }
    printf("the sum of two 1d matrix (A+B) is C\n");
    for (int i = 0; i < size; i++)
    {
        printf("C[%d] = %d\n", i + 1, *(ptr3 + i));
    }
}