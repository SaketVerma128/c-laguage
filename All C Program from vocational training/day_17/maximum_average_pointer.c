#include <stdio.h>
int main()
{
    int arr[10], *p, sum;
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
    printf("%d\n", max);
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("the average of the array is %d", sum / 10);
}