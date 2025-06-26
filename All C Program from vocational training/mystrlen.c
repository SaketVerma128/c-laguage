#include<stdio.h>

int mystrlen( char *s ){
    int i = 0;
    while( s[i] != '\0' ){
        i++;
    }
    return i;
}
int main(){
    char a[20],*p ;
    printf("Enter a string: ");
    gets(a);
    p = a ;
    printf("%d",mystrlen(p));
}