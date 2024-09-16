#include <stdio.h>
#include <stdlib.h>

void gettingInput(int arr[], int size);
void DisplayArrays(int arr[], int size);
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    
    int* arr = (int*) malloc(sizeof(int));
    if (arr != NULL){

    gettingInput(arr, size);
    DisplayArrays(arr,size);

}
}
void gettingInput(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
    printf("Enter integer %d: ", i + 1);
    scanf("%d", &arr[i]);
}
}
void DisplayArrays(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d", arr[i]);
    }

}