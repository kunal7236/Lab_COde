#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    (a>b)?((a>c)?printf("%d",a):printf("%d",c)):((b>c)?printf("%d",b):printf("%d",c));
}