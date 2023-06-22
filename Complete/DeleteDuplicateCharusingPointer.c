                        /*Solution 22*/

#include <stdio.h>
void deleteCharacter(char *str, char c) {
    char *src = str;  // Pointer to the source string
    char *dest = str; // Pointer to the destination string
    
    while (*src != '\0') {
        if (*src != c) {
            *dest = *src; // Copy non-matching characters to destination
            dest++;
        }
        src++;
    }
    
    *dest = '\0'; // Add null terminator at the end to mark the end of the corrected string
}

int main() {
    printf("Enter the size of the String:\n");
    int n;
    scanf("%d", &n);
    printf("Enter the string:\n");
    char str[n];
    scanf("%s", str);
    printf("Enter the character to be deleted:\n");
    char c;
    scanf(" %c", &c); // Added a space before %c to consume any leading whitespace characters
    
    printf("Original String: %s\n", str);
    deleteCharacter(str, c);
    printf("Corrected String: %s\n", str);
    
    return 0;
}
