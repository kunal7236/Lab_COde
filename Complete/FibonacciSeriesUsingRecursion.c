#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        (i!=n)? printf("%d, ", fibonacci(i)): printf("%d", fibonacci(n));
    }
    return 0;
}
