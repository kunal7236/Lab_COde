                 /*Solution 26*/

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

// Function to sort an array of strings into alphabetical order
void sortStrings(char *arr[], int n) {
    char *temp; // Temporary pointer for swapping strings
    int i, j;

    // Use bubble sort algorithm to compare and swap strings
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings using strcmp function
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the pointers if the current string is greater than the next string
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *strings[MAX_STRINGS];
    char input[MAX_LENGTH];
    int i, n;

    printf("Enter the number of strings (up to %d): ", MAX_STRINGS);
    scanf("%d", &n);

    printf("Enter the strings (one per line):\n");
    for (i = 0; i < n; i++) {
        scanf("%s", input);
        strings[i] = strdup(input); // Duplicate the input string and store the pointer
    }

    printf("\nOriginal list of strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    // Sort the list of strings
    sortStrings(strings, n);

    printf("\nSorted list of strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    // Free the memory allocated for each string
    for (i = 0; i < n; i++) {
        free(strings[i]);
    }

    return 0;
}
