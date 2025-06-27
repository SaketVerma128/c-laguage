#include <stdio.h>
int main()
{
    // Declare and print integer variable
    int num1 = 10;
    printf("num1 is %d\n\n", num1);

    // Add two float number
    float num2, num3, sum;
    num2 = 3.14;
    num3 = 6.23;
    sum = num2 + num3;
    printf("the sum of %f and %f is %f\n\n", num2, num3, sum);

    // find the size of data type
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    printf("The size of int data type is %lu bytes\nThe size of float data type is %lu bytes\nThe size of double data type is %lu bytes\nThe size of char data type is %lu bytes\n\n", sizeof(inttype), sizeof(floattype), sizeof(doubletype), sizeof(chartype));

    // swap two variable using temporary variable
    int a = 10, b = 20, c;
    printf("the first value is %d and second value is %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("after swap the first value is %d and second value is %d\n\n", a, b);

    // swap two variable without using temporary variable
    int g = 3, h = 5;
    printf("the first value is %d and second value is %d\n", g, h);
    g = g + h;
    h = g - h;
    g = g - h;
    printf("after swap the first value is %d and second value is %d\n\n", g, h);

    // display ASCII value of a character
    char ch = 'h';
    printf("the character is '%c' and ASCII value is %d\n\n", ch, ch);

    // calculate simple interest
    int P = 1000, R = 2, T = 3;
    float I = (P * R * T) / 100;
    printf("the simple interest when principle is %d , rate is %d percent ,time is %d years is %f\n\n", P, R, T, I);

    // multiply two integer
    int aa = 12, bb = 3, cc;
    cc = aa * bb;
    printf("the multiplication of %d and %d is %d\n\n", aa, bb, cc);

    // find the average of two number
    int d = 34, e = 53;
    float f = (d + e) / 2;
    printf("the average of %d and %d is %f\n\n", d, e, f);

    return 0;
}