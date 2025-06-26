#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int m, n, result;
    printf("Enter the value you want to add\n");
    scanf("%d %d", &m, &n);
    result = add(m, n);
    printf("the sum of %d and %d is %d \n", m, n, result);
    //factorial of n number,palindrom,star piramid.
     for (int i = 10; i > 0; i--) 
        {
            printf("  i  ");
        }
}