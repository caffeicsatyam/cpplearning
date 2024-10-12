#include <stdio.h>
// Function to delete an element at a given index
void delete_element(int arr[], int size, int index) {

// Check if the index is within bounds
    if (index < 0 || index >= size) {
         printf("Deletion not possible\n");
         return;
    }
// Shift elements to the left to fill the gap left by the deleted element
    for (int i = index; i < size - 1; i++) {
         arr[i] = arr[i + 1];
    }
// Decrease the size of the array
    size--;
// Print the updated array
    printf("Array after deletion: ");
          for (int i = 0; i < size; i++) {
          printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
int array[10] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
int size = 5; // Current size of the array
int index = 2; // Index of the element to be deleted
// Delete the element at the given index
delete_element(array, size, index);
return 0;
}