#include <stdio.h>

int* GetSorted(int arr[], int size);


int main(){
    int arr[5] = {5,4,3,2,1};
    int size = 5;

    GetSorted(arr, size);

    return 0;
}
  
int* GetSorted(int arr[], int size){
    int i;
    int j;
    if (arr != NULL){
        arr = (int*) malloc(sizeof(int);
    }
    for (i = 0; i < size-1; i++){
        for (j = 0; j < size-1; i++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

    
    