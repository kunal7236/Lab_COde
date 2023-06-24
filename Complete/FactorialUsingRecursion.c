#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    if(n!=0)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d", n,factorial(n));
    return 0;
}
