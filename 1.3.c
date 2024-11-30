#include <stdio.h>

// Function to delete the first occurrence of x from the list
void delete(int L[], int *size, int x) {
    int found = 0; // Variable to track whether x is found
    for (int i = 0; i < *size; i++) {
        if (L[i] == x && !found) {
            found = 1; // Mark that the element has been found
        }
        if (found && i < *size - 1) {
            L[i] = L[i + 1]; // Shift elements to the left
        }
    }
    if (found) {
        (*size)--; // Decrease the size of the list if the element was found
    } else {
        printf("Element %d not found in the list.\n", x);
    }
}

int main() {
    int size, x;

    // Input the size of the list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);
    int L[size];

    // Input the elements of the list
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &L[i]);
    }

    // Input the value to be deleted
    printf("Enter the value to delete: ");
    scanf("%d", &x);

    // Call the delete function
    delete(L, &size, x);

    // Print the modified list
    printf("List after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}
