#include <stdio.h>
#include <stdlib.h>
int *findprime(int num, int *count)
{
    int ele_num = 3;
    int *prime = (int *)malloc(ele_num * sizeof(int));
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    *count = 3;

    int test = 7;
    int ele_num_now = ele_num;
    while (test <= num)
    {
        int is_prime = 1;
        for (int i = 0; i < *count; i++)
        {
            if (test % prime[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            if (*count == ele_num_now)
            {
                ele_num_now *= 2;
                int *temp = (int *)realloc(prime, ele_num_now * sizeof(int));
                prime = temp;
            }
            *(prime + *count) = test;
            (*count)++;
        }
        test += 2;
    }
    return prime;
}
int main()
{
    int ptr_ele = 0, num = 0;
    printf("enter the number till you want array of prime number\n");
    scanf("%d", &num);
    if (num < 2)
    {
        printf("no prime number is less than 2\n");
        return 0;
    }
    int *prime = findprime(num, &ptr_ele);

    printf("All the prime numbers upto %d is listed below\n[ ", num);
    for (int i = 0; i < ptr_ele; i++)
    {
        printf("%d ", prime[i]);
    }
    printf("]\n");

    printf("the total number or prime number is %d\n", ptr_ele);
}