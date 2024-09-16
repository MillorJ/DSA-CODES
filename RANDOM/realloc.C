#include <stdio.h>
#include <stdlib.h>

    int main(){
        //declaring variables
        int i;
        int n;
        int size = 10;
        printf("Enter the number of size: ");
        scanf("%d", &n);

        int *arr = (int*) malloc(sizeof(int));
        if (arr != NULL){
            for (i = 0; i < size; i++){
                printf("Enter integer %d: ", i + 1);
                scanf(" %d", &arr[i]);
            }
        }


        return 0;
    }