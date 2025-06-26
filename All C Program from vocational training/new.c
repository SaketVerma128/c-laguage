#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated String: %s\n", str1);

    printf("Length of str1: %lu", strlen(str1));

    return 0;
}