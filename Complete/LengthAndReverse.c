                         /*Solution 23*/

#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char *str) {
    int length = 0;

    // Iterate through the string until the null character is found
    while (*str != '\0') {
        length++;
        str++; // Move the pointer to the next character
    }

    return length;
}

// Function to print the string in reverse order
void printReverse(char *str,int l) {
    
    str=str+1*l;         // Move the pointer to the end of the string

    // Print the characters in reverse order
    while (l>= 0) {
        printf("%c", *str);
        str--;  // Move the pointer to the previous character
        l--;    //Decrease the length of string
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    
    // Calculate the length of the string
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    printf("String in reverse order: ");
    // Print the string in reverse order
    printReverse(str,length);

    return 0;
}
