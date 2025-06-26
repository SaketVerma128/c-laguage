#include <stdio.h>
#include<unistd.h>
int main() {
    int arr[10], num, min,temp;
    printf("enter the number of elements in array");
    scanf("%d",&num);
    printf("enter the elements of array\n");
    for(int i=0; i<num; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<num-1 ; i++) {
        min = i; 
        for(int j = i+1; j<num ; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("the shorted array is given below\n");
    for(int i=0; i<num; i++) {
        printf("%d\t",arr[i]);
        sleep(1);
    }
}