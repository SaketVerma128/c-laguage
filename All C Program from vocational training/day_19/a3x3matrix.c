#include <stdio.h>
int main()
{
    int a[3][3], *p;
    printf("enter the elements of the matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    p = *a;
    printf("the elements of the matrix are \n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", *(p + i));
    }
}