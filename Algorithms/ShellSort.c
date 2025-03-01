#include <stdio.h>
#include <stdlib.h>

void shellSort(int arr[], int size){
    int i, j, gap, temp;
    
    for(gap = size/2; gap > 0; gap /= 2){
        for(i = gap; i < size; i++){
            temp = arr[i];
            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap){
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int *arr = malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("entered elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    printf("\n");
    
    shellSort(arr, size);
    
    printf("sorted elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    return 0;
}