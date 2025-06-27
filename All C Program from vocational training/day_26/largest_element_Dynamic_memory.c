#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, *ptr, largest;
    printf("enter the number of elements in the array\n");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));
    printf("enter the elements of the array\n");
    for (int j = 0; j < size; j++)
    {
        scanf("%d", ptr + j);
    }

    printf("the entered values are:\n");
    for (int j = 0; j < size; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    largest = *ptr;
    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }
    printf("the largest element in the array is %d\n", largest);
}