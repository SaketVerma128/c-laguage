#include <stdio.h>
void mystrcpy(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(){
    char a[20],*p , b[20];
    printf("Enter a string: ");
    gets(a);
    mystrcpy(a ,b);
    printf("%s",b);
}