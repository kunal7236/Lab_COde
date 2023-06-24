#include <stdio.h>

int main()
{

    int term=1,n,sum=0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+term;
        (i!=n)?printf("%d, ",term):printf("%d",term);
        term=(term*10)+1;
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}
