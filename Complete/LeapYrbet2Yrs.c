
            /*Solution 4(b)*/

#include<stdio.h>
int main()
{
    printf("Enter the lower limit\n");
    printf("Enter the upper limit\n");
    int lwyr,upyr;
    scanf ("%d%d",&lwyr,&upyr);
    for(int yr=lwyr;yr<=upyr;yr++)
    {
    if(yr%4==0 && yr%100!=0)
    printf("%d ",yr);
    else if(yr%400==0)
    printf("%d ",yr);
    }
    return 0;
}
