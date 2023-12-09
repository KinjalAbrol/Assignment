//WAP THE PROGRAM FOR FINDING DUPLICATE ELEMENTS IN ARRAY
#include <stdio.h>

void findDuplicates(int arr[], int size) {
    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}

int main() {
    int arr[] = {1,1,2,2,1,3,4,3,1,2,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findDuplicates(arr, size);
    
    return 0;
}