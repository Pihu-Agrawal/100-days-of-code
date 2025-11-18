#include <stdio.h>

int main() {
    int n, i, element;
    
    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &element);
    
    // Find position to insert
    int pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }
    
    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert element
    arr[pos] = element;
    n++;  // increase size
    
    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}