#include <stdio.h>
int main()
{
    int i, n, a[10], sum = 0;
    printf("Enter the number of element \n");
    scanf("%d", &n);
    printf("enter the element \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements are ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); 
        sum += a[i];
    }
    printf("\nthe sum of element is %d", sum);
}