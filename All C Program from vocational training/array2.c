#include <stdio.h>

int main() {
    int i, n,m , a[3][3];

    printf("Enter number of marix elements first row and than column:\n");
    scanf("%d %d", &m , &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Matrix elements are:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t " , a[i][j]);
        }
        printf("\n");
        
    }

    printf("\n");
    return 0;
}