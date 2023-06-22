             /*solution 6*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter 3 numbers\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=(a>b && a>c)?a:((b>c)?b:c);
    printf("Greatest among the 3 numbers are %d",max);
}