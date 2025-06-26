#include <stdio.h>
int main()
{
    int arr[10], *p;
    printf("enter the 10 values of array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = arr;
    int max = 0;
    printf("the maximum value in the array is ");
    for (int i = 0; i < 10; i++)
    {
        if (*p > max)
        {
            max = *p;
        }
        p++;
    }
    printf("%d", max);
}