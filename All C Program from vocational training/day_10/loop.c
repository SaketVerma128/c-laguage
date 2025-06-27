#include <stdio.h>
int main()
{
    printf("\nwhile loop\n");
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i * 2);
        i++;
    }

    printf("\nDo while loop\n");
    int j = 1;
    do
    {
        printf("%d ", j * 2);
        j++;
    } while (j <= 10);

    printf("\nfor loop\n");

    for (int k = 1; k <= 10; k++)
    {
        printf("%d ", k * 2);
    }
}