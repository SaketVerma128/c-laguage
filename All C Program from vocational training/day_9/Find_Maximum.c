#include <stdio.h>
int main()
{
    int a[5];
    printf("enter 5 elements of array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the maximum element in array is %d\n", max);
}