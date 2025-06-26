#include <stdio.h>

int main() {
    int i, n,m , a[3][3] , b[3][3]; 

    printf("Enter number of array elements (max 3):\n");
    scanf("%d %d", &m , &n);

    printf("Enter 1st array elements:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("copied matrix\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[i][j];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}