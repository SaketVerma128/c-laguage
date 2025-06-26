#include <stdio.h>
#include <unistd.h>
int main()
{

    // variable declaration
    int array[10], num, temp;

    // number of element entry
    printf("Enter the number of element in array\n");
    scanf("%d", &num);

    // element entry
    printf("Enter the element of array\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    // sorting part
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (array[j] >= array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    // printing part
    printf("The sorted array is given below\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
        sleep(1);
    }
}