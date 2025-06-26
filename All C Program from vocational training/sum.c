#include <stdio.h>

int main(){
    int n1, n2 , sum;
    printf("Enter first number\n");
    scanf("%d",&n1);
    printf("\nEnter second number\n");
    scanf("%d",&n2);
    sum = n1 + n2;
    printf("\n---->The sum of %d and %d is '%d' <----", n1, n2,sum);
    return 0;
}