#include <stdio.h>
#include<stdlib.h>
int main()
{
    // variable decalration
    int n, a[10], key, min, max, mid;

    // element entry
    printf("Enter the number of element\n");
    scanf("%d", &n);
    printf("enter the value of element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // key value
    printf("enter the vlaue of key element\n");
    scanf("%d", &key);

    // searching part
    min = 0;
    max = n - 1;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (a[mid] == key)
        {
            printf("the key is at index %d", mid);
            exit(0);
        }
        else if (key < a[mid])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    printf("key not found");
}