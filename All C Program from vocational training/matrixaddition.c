#include <stdio.h>

int main() {
    int i, n,m , a[3][3] , b[3][3] , c[3][3]; 

    printf("Enter number of array elements (max 10):\n");
    scanf("%d %d", &m , &n);

    printf("Enter 1st array elements:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Enter 2nd array elements:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    
    for (i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");  
    }

    printf("the sum of Array elements are:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
         printf("\n");
    }

    printf("\n");
    return 0;
}