#include <stdio.h>
#include <string.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
}
void piramid(int m)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = m; j > i; j--)
        {
            printf("   ");
        }

        for (int j = 0; j <= i - 2; j++)
        {
            printf(" * ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
void palindrom(char *s)
{
    char word[20];
    strcpy(word, s);
    strrev(s);
    if (strcmp(word, s) == 0)
    {
        printf("string a palindrome");
    }
    else
    {
        printf("string is not a palindrome");
    }
}
int main()
{
    int num;
    printf("Enter the number you want to find factorial\n");
    scanf("%d", &num);
    int result = factorial(num);
    printf("The factorial of %d is %d\n\n\n", num, result);

    int m;
    printf("enter the size of piramid\n");
    scanf("%d", &m);
    piramid(m);
    printf("\n\n\n");

    char str[20];
    printf("Enter a string to check if it is a palindrome\n");
    scanf("%s", str);
    palindrom(str);
}