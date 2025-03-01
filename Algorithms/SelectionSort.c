#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int size){
    int i, j, min, temp;
    
    for(i = 0; i < size - 1; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    
    SelectionSort(arr, size);
    
    printf("sorted elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    return 0;
}