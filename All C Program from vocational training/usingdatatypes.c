#include <stdio.h>
int main() {
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    // Print each variable
    printf("integerVar = %d\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar (scientific) = %e\n", doubleVar);
    printf("doubleVar (compact) = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    return 0;
}