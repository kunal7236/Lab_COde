                       /*Solution 8*/

#include<stdio.h>
#include<math.h>
void digit(int a)
{
 switch (a)
 {
 case 0:printf("Zero ");break;
 case 1:printf("One ");break;
 case 2:printf("Two ");break;
 case 3:printf("Three ");break;
 case 4:printf("Four ");break;
 case 5:printf("Five ");break;
 case 6:printf("Six ");break;
 case 7:printf("Seven ");break;
 case 8:printf("Eight ");break;
 case 9:printf("Nine ");
 }
}
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);
    int dubli=n;
    int count=0;
    while((n>0))
    {
        count++;
        n/=10;
    }
    float base=pow(10,count-1);
    while(count>0)
    {
        digit(dubli/base);
        dubli%=(int)base;
        base/=10;
        count--;
    }
    
}