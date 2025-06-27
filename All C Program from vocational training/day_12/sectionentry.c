#include <stdio.h>
#include <string.h>
int main()
{
    char sec;
    printf("enter your section\n");
    scanf("%d", &sec);
    sec = getchar();
    printf("the section you entered is ");
    putchar(sec);
}