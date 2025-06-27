#include <stdio.h>
int main (){
    int a;
    float b , c;
    double d;
    char e;  
    a = 10;
    b = 10.3;
    c = 10.6;
    d = 10.9;
    e = 'A';
    printf("the address of %d is %u\n", a , &a);
    printf("the address of %f is %u\n", b , &b);
    printf("the address of %f is %u\n", c , &c);
    printf("the address of %f is %u\n", d , &d);
    printf("the address of %c is %u\n", e , &e);
}