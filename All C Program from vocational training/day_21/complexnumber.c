#include <stdio.h>
typedef struct
{
    float realnum;
    float imaginarynum;
} complex;

complex plus(complex a, complex b)
{
    complex c;
    c.realnum = a.realnum + b.realnum;
    c.imaginarynum = a.imaginarynum + b.imaginarynum;
    return c;
}

complex minus(complex a, complex b)
{
    complex c;
    c.realnum = a.realnum - b.realnum;
    c.imaginarynum = a.imaginarynum - b.imaginarynum;
    return c;
}

int main()
{
    complex c1, c2, c3, c4;

    printf("enter your first complex number as a + ib\n");
    scanf("%f  %f", &c1.realnum, &c1.imaginarynum);

    printf("enter your second complex number as a + ib\n");
    scanf("%f  %f", &c2.realnum, &c2.imaginarynum);

    c3 = plus(c1, c2);
    printf("the sum of your first and second complex number as a + ib is %.2f + i%.2f\n", c3.realnum, c3.imaginarynum);

    c4 = minus(c1, c2);
    printf("the substraction of your first and second complex number as a + ib is %.2f + i%.2f\n", c4.realnum, c4.imaginarynum);
}