#include <stdio.h>
#include <stdlib.h>

int* GetEven(int arr[], int size) {
    int i, index = 0;
    int *EvenArr =(int*) malloc((sizeof(int) * size + 1) );
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            EvenArr[index] = arr[i];
            index++;
        }
    }
    EvenArr[index] = -1;
    return EvenArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *result = GetEven(arr, size);
    int i = 0;
    while (result[i] != -1) {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    free(result);
    return 0;
}
//In this example, the function even_numbers takes an array arr and the size of the array size as parameters. It then allocates memory for a new array evenArr to store the even numbers. The function loops through the input array arr and adds the even numbers to evenArr. Finally, it adds -1 as the last element to evenArr and returns the evenArr


