            /*Solution 12*/

#include<stdio.h>
int main() 
{
    int num1, num2;

    // Input two positive integers
    printf("Enter first positive integer: ");
    scanf("%d", &num1);

    printf("Enter second positive integer: ");
    scanf("%d", &num2);

    // Find the minimum of the two numbers
    int min = (num1 < num2) ? num1 : num2;

    int gcd = 1; // Initialize gcd as 1

    // Find the common factors and update gcd
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) 
            gcd = i;
    }
    printf("GCD= %d",gcd);
}
