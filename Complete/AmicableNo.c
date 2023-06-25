#include <stdio.h>
int sum_factors(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        else {continue;}
    }
    return sum;
}
int main()
{
    //taking the input
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    //calling the function
    if(sum_factors(n1)==n2 && sum_factors(n2)==n1)
    {
        printf("%d & %d are Amicable numbers", n1, n2);
    }
    else
    {
        printf("%d & %d are not Amicable", n1, n2);
    }
    return 0;
}
