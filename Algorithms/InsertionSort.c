#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    
    for(i = 0; i < size; i++){
        key = arr[i];
        j = i - 1;
        
       while(j >= 0 && arr[j] > key){
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       
       arr[j + 1] = key;
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
    
    insertionSort(arr, size);
    
    printf("sorted elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    return 0;
}