#include <stdio.h>
#include <stdlib.h>

void inputData(int *arr, int size);
void displayArray(int arr[], int size);
int FindElem(int arr[], int size, int elem);


    int main(){
        //Declaring variables
        int size;
        //getting inputs
        printf("Enter the size: ");
        scanf("%d", &size);

        int *arr = (int*) malloc(sizeof(int));

        inputData(arr, size);

       displayArray(arr,size);
        printf("\nTask 1 Completed");

        int elem;
        printf("\n\nEnter the element that u want to search: ");
        scanf("%d", &elem);
        int index = FindElem(arr, size, elem);

        if (index != -1){
            printf("Element %d is found on index %d", elem, index);
        } else {
            printf("Element %d is not found in the array", elem);
        }

        
    }

void inputData(int *arr, int size){
    int i;
    for (i = 0; i < size; i++){
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    }

void displayArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int FindElem(int arr[], int size, int elem){
    int i; 
    for (i = 0; i < size; i++){
        if (arr[i] == elem){
            return i;
        }
    }
    return -1;
}


