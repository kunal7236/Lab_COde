                /*solution 5*/

#include<stdio.h>
int main()
{
    int c;
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--)
        printf("  ");
        c=11;
        for(int k=1;k<=(2*i-1);k++)
        {
        if(k<i)
        printf("%d ",c--);
        if(k==i)
        printf("%d ",c);
        if(k>i)
        printf("%d ",++c);
        }
        printf("\n");
    }
    return 0;
}
