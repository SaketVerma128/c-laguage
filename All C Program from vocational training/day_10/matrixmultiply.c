#include <stdio.h>
int main()
{

    int a[4][4], b[4][4], c[4][4], m, n, p, q;

    printf("Enter the number of rows and column for 1st matrix\n");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and column for 2nd matrix\n");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("not able to multiply this matix because it is not compatible\n");
    }

    else
    {
        printf("Enter 1st array elements:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter 2nd array elements:\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The solution for matrix multiplication is :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}