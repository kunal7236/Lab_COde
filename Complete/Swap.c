                /*Solution 13*/

#include <stdio.h>
int main()
 {
    int a, b;

    // Input the values of the variables
    printf("Enter the value of variable a: ");
    scanf("%d", &a);

    printf("Enter the value of variable b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
