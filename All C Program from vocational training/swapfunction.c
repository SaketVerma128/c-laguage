#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("the value of a = %d and b = %d\n", a, b);
    swap(&a, &b);

    printf("After swap the value of a = %d and b = %d\n", a, b);
}