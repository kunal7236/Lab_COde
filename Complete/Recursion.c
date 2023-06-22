           /*Solution 20*/

#include<stdio.h>
int Sum(int n)
{
    if(n==2)
    return 2;
    else
    return (n+Sum(n-2));
}
int main()
{
    printf("Enter the value of N\n");
    int N;
    scanf("%d",&N);
    printf("%d",Sum((2*N)));
}