#include <stdio.h>
#include <stdlib.h>

void inputData(int *arr, int size);
void displayArray(int arr[], int size);
int findElem(int arr[], int size, int elem);
    int main(){
        //Declaring Variables
        int size;
        //Input
        printf("Enter the size: ");
        scanf("%d", &size);

        //use malloc to allocate memory
        int *arr = (int*) malloc(sizeof(int));

        //Function Declaration and output
        inputData(arr, size);

        //Function for displaying inputted arrays
        displayArray(arr, size);
        printf("\nTask 1 Done!");
        
        //Input for finding the element and declaring variables;
        int elem;
        printf("\n\nEnter the element you want to search: ");
        scanf("%d", &elem);

        int index = findElem(arr, size, elem);
        if (index != -1){
            printf("The element %d is found in the index %d", elem, index);
        } else {
            printf("The element %d is not found!",elem);
        }

        
        return 0;
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

findElem(int arr[], int size, int elem){
    int i;
    for (i = 0; i < size; i++){
        if(arr[i]== elem){
            return i;
        }
    }
    return 0;
}