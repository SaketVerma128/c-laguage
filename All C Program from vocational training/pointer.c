#include<stdio.h>
int main(){
    int a,b,c = 10;
    int *p;
    a = 4 *(c + 5);
    p = &c;
    b = 4 * (*p + 5);
    printf("a = %d and b = %d",a , b);
}