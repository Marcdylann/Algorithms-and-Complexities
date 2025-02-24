#include <stdio.h>
#include <stdlib.h>

void combSort(int arr[], int size){
    int gap = size;
    float shrink = 1.3;
    int sorted = 0;
    
    while(gap > 1 || sorted == 0){
        gap = (int)gap/shrink;
        if(gap < 1){
            gap = 1;
        }
        
        sorted = 1;
        
        for(int i = 0; i + gap < size; i++){
            if(arr[i] > arr[i + gap]){
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                sorted = 0;
            }
        }
    }
}

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int *arr = malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++){
        printf("Enter element %d", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("entered elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    combSort(arr, size);
    
    printf("sorted elements: ");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
    return 0;
}