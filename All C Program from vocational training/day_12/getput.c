#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("enter your full name\n");
    gets(name);

    printf("your name is ");
    puts(name);
}