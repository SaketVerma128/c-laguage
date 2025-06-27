#include <stdio.h>
int main()
{
    printf("enter 5 element in array\n");
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    int key = 5;
    printf("enter the value of key\n");
    scanf("%d", &key);
    for (int i = 0; i < 5; i++)
    {
        if (key == a[i])
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("Element is present in array");
    }
    else
    {
        printf("Element is not present in array");
    }
}
