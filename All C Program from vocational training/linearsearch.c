#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int key = 5;
    for (int i = 0; i < 5; i++)
    {
        if (key == a[i])
        {
            printf("element found");
        }
        printf("not found");
    }
}
