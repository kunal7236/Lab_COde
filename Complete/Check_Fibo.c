/*A program in C to check whether a term is part of 
Fibonacci series or not.

Trick used:If 5*n²±4 is a perfect sq.,then n is 
Fibonacci term*/
 
                  /*solution 1(b)*/
                  
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int t1=5*n*n+4;
    int t2=5*n*n-4;
    float sq1=sqrt(t1);
    float sq2=sqrt(t2);
    if(sq1*sq1==t1 || sq2*sq2==t2)
    printf("%d is a fibonacci term",n);
    else
    printf("%d is not a fibonacci term",n);
    return 0;
}