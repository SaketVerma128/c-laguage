#include <stdio.h>

// 1. Adds two numbers and returns the result (argument and return both)
int add(int a, int b)
{
    return a + b;
}

// 2.say hello with the user's input name (argument without return)
void greet(char name[])
{
    printf("Hello, %s! \n", name);
}

// 3. Returns a integer value(return without argument)
int retNum()
{
    int num = 10;
    return num;
}

// 4.prints goodmorning (no return no argunment)
void goodmorning()
{
    printf("morning\n");
}

int main()
{
    int x = 10, y = 20;
    int sum = add(x, y);
    printf("Sum of %d and %d is: %d\n", x, y, sum);

    char name[] = "saket";
    printf("goodmorning:\n");
    greet(name);

    int number = retNum();
    printf("Returned number is: %d\n", number);

    goodmorning();

    return 0;
}