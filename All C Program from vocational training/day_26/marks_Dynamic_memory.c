#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num_sub, *mark;
    printf("Enter the number of subjects: ");
    scanf("%d", &num_sub);
    mark = (int *)malloc(num_sub * sizeof(int));

    for (int i = 0; i < num_sub; i++)
    {
        printf("Enter the marks of subject %d: ", i + 1);
        scanf("%d", (mark + i));
    }

    printf("printing marks of all subjects\n");
    for (int i = 0; i < num_sub; i++)
    {
        printf("marks of subject %d: %d\n", i + 1, *(mark + i));
    }
}