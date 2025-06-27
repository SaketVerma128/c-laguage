#include <stdio.h>
int mystrcmp(char *s1, char *s2)
{
    for (int i = 0; i < 20; i++)
    {
        if (*s1 != *s2)
        {
            return i + 1;
        }
        else if (*s1 == '\0' && *s2 == '\0')
        {
            return 0;
        }
        else
        {
            s1++;
            s2++;
        }
    }
    return 0;
}
int main()
{
    char A[20], B[20], *p, *q;
    printf("Enter the first string: ");
    gets(A);
    printf("enter the second string: ");
    gets(B);
    p = A;
    q = B;
    if (mystrcmp(p, q) == 0)
    {
        printf("there is no difference between the two strings");
    }
    else
    {
        printf("the difference is at position %d", mystrcmp(p, q));
    }
}