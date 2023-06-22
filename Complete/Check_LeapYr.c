                   
              /*Solution to 4(a)*/

#include<stdio.h>

int main()
{
    printf("Enter the year\n");
    int yr;
    scanf ("%d",&yr);
    if(yr%4==0 && yr%100!=0)
    printf("leap year");
    else if(yr%400==0)
    printf("leap year");
    else
    printf("Not a leap year");
    return 0;
}