#include <stdio.h>
int main()
{

    // Q1 Write a C program to demonstrate arithmetic operators (+, -, *, /, %).
    int a, b;
    printf("enter 2 integer values\n");
    scanf("%d%d", &a, &b);
    printf("\n\naddition of %d and %d = %d\n", a, b, a + b);
    printf("subtraction of %d and %d = %d\n", a, b, a - b);
    printf("modulus of %d and %d = %d\n", a, b, a % b);
    printf("multipication of %d and %d = %d\n", a, b, a * b);
    printf("division of %d and %d = %d\n\n\n", a, b, a / b);

    // Q2 Write a C program to demonstrate relational operators (>, <, ==, !=, >=, <=).
    printf("i am using the value of a and b, we entered before\nHere 0 = false and 1 =true\n");
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n\n\n", a, b, a != b);

    // Q3 Write a C program to demonstrate logical operators (&&, ||, !).
    int age;
    printf("tell your age\n");
    scanf("%d", &age);
    printf("you are able to drive a vehical '%d'\n", age >= 18 &&
                                                         age < 70);
    printf("the result will be true if a>=b || b>=a = '%d'\nThis will alweys be true\n", a >= b || b >= a);
    printf("if 'a' was a non zero it will give zero = '%d'\n\n\n", !a);

    // Q5 Write a C program to demonstrate compound assignment operators (+=, -=, *=, /=, %=).
    int c;
    printf("enter the value in which you want to perform compound assignment operation\n");
    scanf("%d", &c);
    printf("%d += 25 = %d\n", c, c += 25);
    printf("%d -= 25 = %d\n", c, c -= 25);
    printf("%d *= 25 = %d\n", c, c *= 25);
    printf("%d /= 25 = %d\n", c, c /= 25);
    printf("%d '%'= 25 = %d\n\n\n", c, c %= 25);

    // Q6 Write a C program to demonstrate increment and decrement operators (++ and --).
    int f = 5;
    int d = ++f;
    int e = --f;
    printf("incrementation of %d is %d\n", f, d);
    printf("decrementation of %d is %d\n\n\n", f, e);

    // Q7 Write a C program to find the maximum of two numbers using the ternary operator.
    (a > b) ? printf("%d is greater than %d\n\n\n", a, b) : printf("%d is greater than %d\n\n\n", b, a);

    // Q8 Write a C program to display the size of various data types using the sizeof operator.
    printf("The size of int data type is %lu bytes\nThe size of float data type is %lu bytes\nThe size of double data type is %lu bytes\nThe size of char data type is %lu bytes\n\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char));
    return 0;
}